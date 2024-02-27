/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 13:55:07 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
  this->_init();
  std::cout << "Brain default constructor called" << std::endl;
}

void Brain::_init() {
  for (int i = 0; i < 100; i++) {
    this->_ideas[i] = "";
  }
}

Brain::Brain(const Brain& src) {
  copyIdeas(src);
  std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs) {
  if (this != &rhs) {
    copyIdeas(rhs);
  }
  std::cout << "Brain copy assignment operator called" << std::endl;
  return *this;
}

Brain::~Brain() {
  std::cout << "Brain destructor called" << std::endl;
}

void Brain::copyIdeas(const Brain& src) {
  std::string idea;
  for (int i = 0; i < 100; i++) {
    this->_ideas[i] = src._ideas[i];
  }
}

void Brain::teachIdea(const std::string& idea) {
  int i;
  for (i = 0; i < 100; i++) {
    if (this->_ideas[i].empty()) {
      this->_ideas[i] = idea;
      break;
    }
  }
  if (i == 100) {
    std::cout << "Brain is full, cannot teach more ideas." << std::endl;
  }
}

std::string Brain::getIdea(int index) const {
  std::string idea;
  if (index >= 0 && index < 100) {
    idea = _ideas[index];
  }
  return idea;
}