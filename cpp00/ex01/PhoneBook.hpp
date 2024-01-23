/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:51:41 by agaley            #+#    #+#             */
/*   Updated: 2023/12/15 19:56:08 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include "Contact.hpp"

class PhoneBook {
 public:
  PhoneBook();
  ~PhoneBook();

  void addContact();
  void searchContact();

 private:
  Contact _contacts[8];
  int  _currentContactIndex;
  bool _isFull;

  std::string _getOneFieldInput(const std::string &prompt);
  int _getContactIndexInput();
  void _displayAllContacts();
  void _displayOneContact(int index);
};

#endif
