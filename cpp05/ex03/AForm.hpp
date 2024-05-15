/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:59:26 by agaley            #+#    #+#             */
/*   Updated: 2024/05/16 00:57:51 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
#define AFORM_H

#include <iostream>
#include <stdexcept>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
 protected:
  const std::string _name;
  bool              _isSigned;
  const int         _signGrade;
  const int         _execGrade;

  void _checkExec(const Bureaucrat& executor) const;

 public:
  AForm(const std::string& name, int signGrade, int execGrade);
  AForm();
  AForm(const AForm& other);
  AForm& operator=(const AForm& other);
  virtual ~AForm();

  const std::string& getName() const;
  bool               isSigned() const;
  int                getSignGrade() const;
  int                getExecGrade() const;

  void beSigned(const Bureaucrat& bureaucrat);

  class GradeTooHighException : public std::exception {
   public:
    virtual const char* what() const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    virtual const char* what() const throw();
  };

  virtual void execute(Bureaucrat const& executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif