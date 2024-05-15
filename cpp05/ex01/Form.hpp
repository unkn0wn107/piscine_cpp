/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:59:26 by agaley            #+#    #+#             */
/*   Updated: 2024/05/15 13:52:52 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <stdexcept>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
 private:
  const std::string _name;
  bool              _isSigned;
  const int         _signGrade;
  const int         _execGrade;

 public:
  Form(const std::string& name, int signGrade, int execGrade);
  Form();
  Form(const Form& other);
  Form& operator=(const Form& other);
  ~Form();

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
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif