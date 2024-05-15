/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:59:33 by agaley            #+#    #+#             */
/*   Updated: 2024/05/15 13:52:10 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string& name, int signGrade, int execGrade)
    : _name(name),
      _isSigned(false),
      _signGrade(signGrade),
      _execGrade(execGrade) {
  if (signGrade < 1 || execGrade < 1)
    throw GradeTooHighException();
  if (signGrade > 150 || execGrade > 150)
    throw GradeTooLowException();
}

Form::Form()
    : _name("Form"), _isSigned(false), _signGrade(150), _execGrade(150) {}

Form::Form(const Form& other)
    : _name(other._name),
      _isSigned(other._isSigned),
      _signGrade(other._signGrade),
      _execGrade(other._execGrade) {}

Form& Form::operator=(const Form& other) {
  if (this != &other) {
    this->_isSigned = other._isSigned;
  }
  return *this;
}

Form::~Form() {}

const std::string& Form::getName() const {
  return _name;
}

bool Form::isSigned() const {
  return _isSigned;
}

int Form::getSignGrade() const {
  return _signGrade;
}

int Form::getExecGrade() const {
  return _execGrade;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
  if (bureaucrat.getGrade() > _signGrade)
    throw GradeTooLowException();
  _isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw() {
  return ("Grade too high.");
};

const char* Form::GradeTooLowException::what() const throw() {
  return ("Grade too low.");
};

std::ostream& operator<<(std::ostream& out, const Form& form) {
  out << "Form name: " << form.getName()
      << ", signed: " << (form.isSigned() ? "yes" : "no")
      << ", sign grade: " << form.getSignGrade()
      << ", exec grade: " << form.getExecGrade();
  return out;
}