/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:51:41 by agaley            #+#    #+#             */
/*   Updated: 2024/01/22 10:18:01 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    ~PhoneBook();

    void addContact();
    void searchContact();

private:
    Contact _contacts[8];
    int _currentContactIndex;

    std::string _getOneFieldInput(const std::string& prompt);
    int _getContactIndexInput();
    void _displayAllContacts();
    void _displayOneContact(int index);
};

#endif
