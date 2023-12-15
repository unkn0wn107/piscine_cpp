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
    Contact contacts[8];
    int currentContactIndex;

    std::string getOneFieldInput(const std::string& prompt);
    int getContactIndexInput();
    void displayAllContacts();
    void displayOneContact(int index);
};

#endif
