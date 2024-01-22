/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:51:08 by agaley            #+#    #+#             */
/*   Updated: 2024/01/22 14:02:32 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main() {
    PhoneBook phoneBook;
    std::string command;

    while(true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (std::cin.fail() || std::cin.eof()) {
            std::cin.clear();
            std::cin.ignore();
            exit(EXIT_FAILURE);
        }
        if (command == "ADD" || command == "add")
            phoneBook.addContact();
        else if (command == "SEARCH" || command == "search")
            phoneBook.searchContact();
        else if (command == "EXIT" || command == "exit") {
            std::cout << "bye bye" << std::endl;
            break;
        }
        else if (!command.empty())
            std::cout << "It's a crappy phonebook - Only 3 commands are available ;)" << std::endl;
        std::cout << std::endl;
    }
    return 0;
}
