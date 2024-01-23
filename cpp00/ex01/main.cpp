/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:51:08 by agaley            #+#    #+#             */
/*   Updated: 2023/12/15 18:38:44 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include "PhoneBook.hpp"

int main() {
  PhoneBook phoneBook;
  std::string command;

  while (true) {
    std::cout << "Enter command (ADD, SEARCH, EXIT): ";
    std::getline(std::cin, command);

    if (std::cin.fail())
      exit(EXIT_FAILURE);
    else if (std::cin.eof()) {
      std::cin.clear();
      continue;
    }
    else if (command == "ADD" || command == "add")
      phoneBook.addContact();
    else if (command == "SEARCH" || command == "search")
      phoneBook.searchContact();
    else if (command == "EXIT" || command == "exit") {
      std::cout << "bye bye" << std::endl;
      break;
    } else
      std::cout << "It's a crappy phonebook - Only 3 commands exist"
                << std::endl;
    std::cout << std::endl;
  }
  return 0;
}
