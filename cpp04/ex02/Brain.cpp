/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 22:25:14 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
  for (int i = 0; i < 100; ++i) {
    _ideas[i] = "";
  }
  std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& src) {
  *this = src;
  std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs) {
  if (this != &rhs) {
    for (int i = 0; i < 100; ++i) {
      this->_ideas[i] = rhs._ideas[i];
    }
  }
  std::cout << "Brain copy assignment operator called" << std::endl;
  return *this;
}

Brain::~Brain() {
  std::cout << "Brain destructor called" << std::endl;
}

void Brain::teachIdea(const std::string& idea) {
  for (int i = 0; i < 100; ++i) {
    if (this->_ideas[i].empty()) {
      this->_ideas[i] = idea;
      return;
    }
  }
  std::cout << "Brain is full, cannot teach more ideas." << std::endl;
}

std::string Brain::getIdea(int index) const {
  if (index >= 0 && index < 100) {
    return _ideas[index];
  }
  return "";
}