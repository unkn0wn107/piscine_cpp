/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:59:53 by agaley            #+#    #+#             */
/*   Updated: 2024/05/16 13:42:53 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {
	Intern internus;
  Bureaucrat minimus("Minimus", 150);

  try {
    Bureaucrat             caesar("Julius Caesar", 25);
    Bureaucrat             marcus("Marcus Aurelius", 5);
    AForm* ppf;
	  ppf = internus.makeForm("presidential pardon", "Brutus");

    std::cout << *ppf << std::endl;
    caesar.signForm(*ppf);
    marcus.executeForm(*ppf);
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  std::cout << "--------------------" << std::endl;

  try {
    Bureaucrat            marcus("Plebeius Minimus", 140);
    Bureaucrat            caesar("Gaius Meridius", 137);
    AForm* scf;
    scf = internus.makeForm("shrubbery creation", "Shrubberitus");

    std::cout << *scf << std::endl;
    marcus.signForm(*scf);
    caesar.executeForm(*scf);
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  std::cout << "--------------------" << std::endl;

  try {
    Bureaucrat          maximus("Maximus Decimus Meridius", 72);
    Bureaucrat          plebeius("Plebeius Maximus", 45);
    AForm *rrf;
    rrf = internus.makeForm("robotomy request", "Robotomitus");

    std::cout << *rrf << std::endl;
    minimus.signForm(*rrf);
    maximus.signForm(*rrf);
    minimus.executeForm(*rrf);
    plebeius.executeForm(*rrf);
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  return 0;
}