/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 06:59:41 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
  this->_brain = new Brain();
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& src) {
  this->_type = src._type;
  this->_brain = new Brain(*src._brain);
  std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& animal) {
  if (this != &animal) {
    this->_type = animal._type;
    delete this->_brain;
    this->_brain = new Brain(*animal._brain);
  }
  std::cout << "Animal copy assignment operator called" << std::endl;
  return *this;
}

Animal::~Animal() {
  delete this->_brain;
  std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
  return this->_type;
}

void Animal::makeSound() const {
  std::cout << "*silence*" << std::endl;
}

void Animal::teachIdea(const std::string& idea) const {
  this->_brain->teachIdea(idea);
}

std::string Animal::getIdea(int index) const {
  std::string idea;
  idea = this->_brain->getIdea(index);
  return idea;
}