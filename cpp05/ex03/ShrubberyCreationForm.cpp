/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:59:33 by agaley            #+#    #+#             */
/*   Updated: 2024/05/16 00:58:16 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(
    const ShrubberyCreationForm& other) {
  if (this != &other) {
    AForm::operator=(other);
  }
  return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
  AForm::_checkExec(executor);

  std::ofstream file;
  file.open((getName() + "_shrubbery").c_str());
  if (!file.is_open()) {
    throw std::runtime_error("Unable to open file: " +
                             std::string(getName() + "_shrubbery"));
  }

  if (file.is_open()) {
    file << "               .\n"
         << "         .     ;\n"
         << "      .-' _  ;;'\n"
         << "   .-' _ '-' _ ';\n"
         << "  ; _ -'   _-' _ ;;'\n"
         << " ;;'-' _ ' ;;'-' _ ';\n"
         << " ;;'-' _ ' ;;'-' _ ';\n"
         << "  ;;'  _  ;;'  _  ;;'\n"
         << "   ;;'-' _ ' ;;'-' _ ';\n"
         << "    ;;'-' _ ' ;;'-' _ ';\n"
         << "      ;;'  _  ;;'\n"
         << "         ;;'\n"
         << "         ;;\n";
    file.close();
    std::cout << "Shrubbery created at " << getName() << "_shrubbery"
              << std::endl;
  } else {
    std::cout << "Failed to create " << getName() << "_shrubbery" << std::endl;
  }
}