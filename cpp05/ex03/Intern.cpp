/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:24:46 by agaley            #+#    #+#             */
/*   Updated: 2024/05/16 01:10:55 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern&) {}

Intern& Intern::operator=(const Intern&) {
  return *this;
}

Intern::~Intern() {}

AForm* Intern::makeShrubberyCreationForm(const std::string& target) {
  return new ShrubberyCreationForm(target);
}

AForm* Intern::makeRobotomyRequestForm(const std::string& target) {
  return new RobotomyRequestForm(target);
}

AForm* Intern::makePresidentialPardonForm(const std::string& target) {
  return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(const std::string& formName,
                        const std::string& target) {
  s_form forms[] = {
      {"shrubbery creation", &Intern::makeShrubberyCreationForm},
      {"robotomy request", &Intern::makeRobotomyRequestForm},
      {"presidential pardon", &Intern::makePresidentialPardonForm}};

  for (uint i = 0; i < sizeof(forms) / sizeof(forms[0]); ++i) {
    if (formName == forms[i].name) {
      std::cout << "Intern creates " << formName << std::endl;
      return (this->*(forms[i].creator))(target);
    }
  }

  throw std::invalid_argument("Invalid form name: " + formName);
}