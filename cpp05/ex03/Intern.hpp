/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:24:34 by agaley            #+#    #+#             */
/*   Updated: 2024/05/16 01:10:22 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
 public:
  Intern();
  Intern(const Intern& other);
  Intern& operator=(const Intern& other);
  ~Intern();

  AForm* makeShrubberyCreationForm(const std::string& target);
  AForm* makeRobotomyRequestForm(const std::string& target);
  AForm* makePresidentialPardonForm(const std::string& target);
  AForm* makeForm(const std::string& formName, const std::string& target);

 private:
  struct s_form {
    const char* name;
    AForm* (Intern::*creator)(const std::string&);
  };
};

#endif