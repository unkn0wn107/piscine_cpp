/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 01:13:49 by agaley            #+#    #+#             */
/*   Updated: 2024/09/02 13:06:04 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

BitcoinExchange::BitcoinExchange() {}

bool BitcoinExchange::loadDatabase(const std::string &filename) {
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        return false;
    }

    std::string line;
    std::getline(file, line); // Skip the header
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date, value;
        std::getline(iss, date, ',');
        std::getline(iss, value);
        database[date] = std::strtod(value.c_str(), NULL);
    }

    file.close();
    return true;
}

void BitcoinExchange::processLine(const std::string &line) {
    std::istringstream iss(line);
    std::string date, value;
    std::getline(iss, date, '|');
    std::getline(iss, value);

    date.erase(date.begin(), std::find_if(date.begin(), date.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
    date.erase(std::find_if(date.rbegin(), date.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), date.end());
    value.erase(value.begin(), std::find_if(value.begin(), value.end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
    value.erase(std::find_if(value.rbegin(), value.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), value.end());

    double numValue = std::strtod(value.c_str(), NULL);
    if (numValue < 0)
        return handleError("Error: not a positive number.");
    if (numValue > 1000)
        return handleError("Error: too large number.");

    std::map<std::string, double>::iterator it = database.lower_bound(date);
    if (it == database.end() || it->first != date) {
        if (it == database.begin())
            return handleError("Error: bad input => " + date);
        --it;
    }

    if (date.size() == 10 && date[4] == '-' && date[7] == '-') {
        int year = atoi(date.substr(0, 4).c_str());
        int month = atoi(date.substr(5, 2).c_str());
        int day = atoi(date.substr(8, 2).c_str());

        if (month < 1 || month > 12 || day < 1 || day > 31)
            return handleError("Error: " + date + " is not a valid date.");

        const int daysInMonth[] = { 31, 28 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (day > daysInMonth[month - 1])
            return handleError("Error: " + date + " is not a valid date.");
    } else {
        return handleError("Error: " + date + " is not in a valid format.");
    }

    std::cout << date << " => " << numValue << " = " << numValue * it->second << std::endl;
}

void BitcoinExchange::handleError(const std::string &message) {
    std::cerr << message << std::endl;
}
