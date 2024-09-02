/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 01:13:54 by agaley            #+#    #+#             */
/*   Updated: 2024/09/02 12:19:36 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    BitcoinExchange btc;
    if (!btc.loadDatabase("data.csv")) {
        std::cerr << "Error: could not open database." << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    std::string line;
    std::getline(inputFile, line); // Skip the header
    while (std::getline(inputFile, line)) {
        btc.processLine(line);
    }

    inputFile.close();
    return 0;
}
