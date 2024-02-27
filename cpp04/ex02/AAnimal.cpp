/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 07:13:26 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
  this->_brain = new Brain();
  std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src) {
  this->_type = src._type;
  this->_brain = new Brain(*src._brain);
  std::cout << "Animal copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& animal) {
  if (this != &animal) {
    this->_type = animal._type;
    delete this->_brain;
    this->_brain = new Brain(*animal._brain);
  }
  std::cout << "Animal copy assignment operator called" << std::endl;
  return *this;
}

AAnimal::~AAnimal() {
  delete this->_brain;
  std::cout << "Animal destructor called" << std::endl;
}

void AAnimal::teachIdea(const std::string& idea) const {
  this->_brain->teachIdea(idea);
}

std::string AAnimal::getIdea(int index) const {
  std::string idea;
  idea = this->_brain->getIdea(index);
  return idea;
}