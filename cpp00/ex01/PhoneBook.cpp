/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:51:37 by agaley            #+#    #+#             */
/*   Updated: 2024/01/12 02:12:45 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
  _currentContactIndex = 0;
  _isFull = false;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact() {
  Contact contact;

  contact.setFirstName(_getOneFieldInput("Enter first name: "));
  contact.setLastName(_getOneFieldInput("Enter last name: "));
  contact.setNickname(_getOneFieldInput("Enter nick name: "));
  contact.setPhoneNumber(_getOneFieldInput("Enter phone number: "));
  contact.setDarkestSecret(_getOneFieldInput("Enter darkest secret: "));

  _contacts[_currentContactIndex] = contact;
  _currentContactIndex++;
  if (_currentContactIndex == 8) {
    _currentContactIndex = 0;
    _isFull = true;
  }
}

void PhoneBook::searchContact() {
  int index;

  if (_currentContactIndex == 0 && !_isFull) {
    std::cout << "No contacts in this crappy phonebook. Start by adding one :)"
              << std::endl;
    return;
  }

  _displayAllContacts();
  index = _getContactIndexInput();
  _displayOneContact(index);
}

int PhoneBook::_getContactIndexInput() {
  std::string line;
  int         index;
  int j = _currentContactIndex;

  if (_isFull)
    j = 8;
  index = -1;
  while (true) {
    std::cout << "Contact to show - enter the index : ";
    std::getline(std::cin, line);

    if (std::cin.fail())
      exit(EXIT_FAILURE);
    else if (std::cin.eof())
      std::cin.clear();
    else if (!std::isdigit(line[0]))
      std::cout << "Invalid index." << std::endl << std::endl;
    else {
      std::istringstream ss(line);
      ss >> index;
      if (index < 0 || index >= j) {
        std::cout << "Contact not found." << std::endl;
        _displayAllContacts();
        std::cout << std::endl;
      } else
        break;
    }
  }
  std::cin.clear();
  return index;
}

std::string PhoneBook::_getOneFieldInput(const std::string& prompt) {
  std::string input;
  while (true) {
    std::cout << prompt;
    std::getline(std::cin, input);

    if (std::cin.fail())
      exit(EXIT_FAILURE);
    else if (std::cin.eof()) {
      std::cin.clear();
      continue;
    }
    if (input.empty()) {
      std::cout << "Empty field is forbidden.\n";
      continue;
    }
    break;
  }
  return input;
}

void PhoneBook::_displayAllContacts() {
  int i = 0;
  int j = _currentContactIndex;

  if (_isFull)
    j = 8;
  std::cout << j << std::endl;
  std::cout << "Your contacts list : " << std::endl;
  while (i < j) {
    std::cout << std::setw(10) << i << "|";
    std::cout << std::setw(10) << _contacts[i].getFirstName().substr(0, 9)
              << "|";
    std::cout << std::setw(10) << _contacts[i].getLastName().substr(0, 9)
              << "|";
    std::cout << std::setw(10) << _contacts[i].getNickname().substr(0, 9)
              << std::endl;
    i++;
  }
}

void PhoneBook::_displayOneContact(int index) {
  std::cout << std::endl;
  std::cout << "First name: " << _contacts[index].getFirstName() << std::endl;
  std::cout << "Last name: " << _contacts[index].getLastName() << std::endl;
  std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
  std::cout << "Phone number: " << _contacts[index].getPhoneNumber()
            << std::endl;
  std::cout << "Darkest secret: " << _contacts[index].getDarkestSecret()
            << std::endl;
}
