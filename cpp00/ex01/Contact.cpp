/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:50:42 by agaley            #+#    #+#             */
/*   Updated: 2024/01/12 01:40:55 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setFirstName(const std::string &_firstName) {
  this->_firstName = _firstName;
}

void Contact::setLastName(const std::string &_lastName) {
  this->_lastName = _lastName;
}

void Contact::setNickname(const std::string &_nickname) {
  this->_nickname = _nickname;
}

void Contact::setPhoneNumber(const std::string &_phoneNumber) {
  this->_phoneNumber = _phoneNumber;
}

void Contact::setDarkestSecret(const std::string &_darkestSecret) {
  this->_darkestSecret = _darkestSecret;
}

std::string Contact::getFirstName() const {
  return this->_firstName;
}

std::string Contact::getLastName() const {
  return this->_lastName;
}

std::string Contact::getNickname() const {
  return this->_nickname;
}

std::string Contact::getPhoneNumber() const {
  return this->_phoneNumber;
}

std::string Contact::getDarkestSecret() const {
  return this->_darkestSecret;
}
