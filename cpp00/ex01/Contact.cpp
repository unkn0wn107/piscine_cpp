/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:50:42 by agaley            #+#    #+#             */
/*   Updated: 2024/01/22 10:17:50 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setFirstName(const std::string &firstName) {
    this->_firstName = firstName;
}

void Contact::setLastName(const std::string &lastName) {
    this->_lastName = lastName;
}

void Contact::setNickname(const std::string &nickname) {
    this->_nickname = nickname;
}

void Contact::setPhoneNumber(const std::string &phoneNumber) {
    this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string &darkestSecret) {
    this->_darkestSecret = darkestSecret;
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
