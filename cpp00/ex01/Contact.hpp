/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:51:02 by agaley            #+#    #+#             */
/*   Updated: 2023/12/15 16:55:01 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <stdlib.h>

class Contact {
 private:
  std::string _firstName;
  std::string _lastName;
  std::string _nickname;
  std::string _phoneNumber;
  std::string _darkestSecret;

 public:
  Contact();
  ~Contact();

  void setFirstName(const std::string &_firstName);
  void setLastName(const std::string &_lastName);
  void setNickname(const std::string &_nickname);
  void setPhoneNumber(const std::string &_phoneNumber);
  void setDarkestSecret(const std::string &_darkestSecret);

  std::string getFirstName() const;
  std::string getLastName() const;
  std::string getNickname() const;
  std::string getPhoneNumber() const;
  std::string getDarkestSecret() const;
};

#endif
