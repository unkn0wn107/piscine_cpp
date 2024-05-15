/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:59:33 by agaley            #+#    #+#             */
/*   Updated: 2024/05/16 00:57:03 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string& name, int signGrade, int execGrade)
    : _name(name),
      _isSigned(false),
      _signGrade(signGrade),
      _execGrade(execGrade) {
  if (signGrade < 1 || execGrade < 1)
    throw GradeTooHighException();
  if (signGrade > 150 || execGrade > 150)
    throw GradeTooLowException();
}

AForm::AForm()
    : _name("Form"), _isSigned(false), _signGrade(150), _execGrade(150) {}

AForm::AForm(const AForm& other)
    : _name(other._name),
      _isSigned(other._isSigned),
      _signGrade(other._signGrade),
      _execGrade(other._execGrade) {}

AForm& AForm::operator=(const AForm& other) {
  if (this != &other) {
    this->_isSigned = other._isSigned;
  }
  return *this;
}

AForm::~AForm() {}

const std::string& AForm::getName() const {
  return _name;
}

bool AForm::isSigned() const {
  return _isSigned;
}

int AForm::getSignGrade() const {
  return _signGrade;
}

int AForm::getExecGrade() const {
  return _execGrade;
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
  if (bureaucrat.getGrade() > _signGrade)
    throw GradeTooLowException();
  _isSigned = true;
}

const char* AForm::GradeTooHighException::what() const throw() {
  return ("Grade too high.");
};

const char* AForm::GradeTooLowException::what() const throw() {
  return ("Grade too low.");
};

void AForm::_checkExec(const Bureaucrat& executor) const {
  if (!_isSigned) {
    throw AForm::GradeTooLowException();
  }
  if (executor.getGrade() > _execGrade) {
    throw AForm::GradeTooLowException();
  }
}

std::ostream& operator<<(std::ostream& out, const AForm& form) {
  out << "Form name: " << form.getName()
      << ", signed: " << (form.isSigned() ? "yes" : "no")
      << ", sign grade: " << form.getSignGrade()
      << ", exec grade: " << form.getExecGrade();
  return out;
}