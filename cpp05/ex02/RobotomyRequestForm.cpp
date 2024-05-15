/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:59:33 by agaley            #+#    #+#             */
/*   Updated: 2024/05/16 00:58:08 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(
    const RobotomyRequestForm& other) {
  if (this != &other) {
    AForm::operator=(other);
  }
  return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
  AForm::_checkExec(executor);

  std::cout << "Bzzzt... Whirr... Zzzzt..." << std::endl;
  srand(time(0));
  if (rand() % 2) {
    std::cout << getName() << " has been robotomized successfully!"
              << std::endl;
  } else {
    std::cout << "The robotomy on " << getName() << " has failed..."
              << std::endl;
  }
}