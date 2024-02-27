/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 07:12:37 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
  this->_type = "Cat";
  std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : AAnimal(src) {
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
  if (this != &src) {
    AAnimal::operator=(src);
  }
  std::cout << "Cat copy assignment operator called" << std::endl;
  return *this;
}

Cat::~Cat() {
  std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType() const {
  return this->_type;
}

void Cat::makeSound() const {
  std::cout << "Miaouuuuu ^^" << std::endl;
}