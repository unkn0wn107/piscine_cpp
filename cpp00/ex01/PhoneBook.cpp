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
  currentContactIndex = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact() {
  Contact contact;

  contact.setFirstName(getOneFieldInput("Enter first name: "));
  contact.setLastName(getOneFieldInput("Enter last name: "));
  contact.setNickname(getOneFieldInput("Enter nickname: "));
  contact.setPhoneNumber(getOneFieldInput("Enter phone number: "));
  contact.setDarkestSecret(getOneFieldInput("Enter darkest secret: "));

  contacts[currentContactIndex] = contact;
  currentContactIndex = (currentContactIndex + 1) % 8;
}

void PhoneBook::searchContact() {
  int index;

  if (currentContactIndex == 0) {
    std::cout << "No contacts in this crappy phonebook. Start by adding one :)"
              << std::endl;
    return;
  }

  displayAllContacts();
  index = getContactIndexInput();
  displayOneContact(index);
}

int PhoneBook::getContactIndexInput() {
  std::string line;
  int index;

  index = -1;
  while (true) {
    std::cout << "Contact to show - enter the index : ";
    std::cin >> line;

    if (std::cin.eof() || std::cin.fail())
      std::cin.clear();
    else if (!std::isdigit(line[0]))
      std::cout << "Invalid index." << std::endl << std::endl;
    else {
      std::istringstream ss(line);
      ss >> index;
      if (index < 0 || index > currentContactIndex) {
        std::cout << "Contact not found." << std::endl;
        displayAllContacts();
        std::cout << std::endl;
      } else
        break;
    }
  }
  std::cin.clear();
  return index;
}

std::string PhoneBook::getOneFieldInput(const std::string &prompt) {
  std::string input;
  while (true) {
    std::cout << prompt;
    std::getline(std::cin, input);
    if (input.empty()) {
      std::cout << "Empty field is forbidden.\n";
      continue;
    }
    break;
  }
  return input;
}

void PhoneBook::displayAllContacts() {
  int i = 0;

  std::cout << "Your contacts list : " << std::endl;
  while (i < currentContactIndex) {
    std::cout << std::setw(10) << i << "|";
    std::cout << std::setw(10) << contacts[i].getFirstName().substr(0, 9)
              << "|";
    std::cout << std::setw(10) << contacts[i].getLastName().substr(0, 9) << "|";
    std::cout << std::setw(10) << contacts[i].getNickname().substr(0, 9)
              << std::endl;
    i++;
  }
}

void PhoneBook::displayOneContact(int index) {
  std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
  std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
  std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
  std::cout << "Phone number: " << contacts[index].getPhoneNumber()
            << std::endl;
  std::cout << "Darkest secret: " << contacts[index].getDarkestSecret()
            << std::endl;
}
