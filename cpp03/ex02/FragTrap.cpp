/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/06 15:27:38 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
  this->_className = "FragTrap";
  std::cout << this->_className << " " << this->_name
            << " default constructor called." << std::endl;
  this->_initStats();
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
  this->_className = "FragTrap";
  this->_initStats();
  std::cout << this->_className << " " << this->_name
            << " name constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src) {
  this->_className = "FragTrap";
  std::cout << this->_className << " " << this->_name
            << " copy constructor called." << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << this->_className << " " << this->_name << " destructor called."
            << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
  if (this != &rhs) {
    ClapTrap::operator=(rhs);
  }
  std::cout << this->_className << " " << this->_name
            << " assignment operator called." << std::endl;
  return *this;
}

void FragTrap::_initStats() {
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

void FragTrap::highFivesGuys(void) const {
  std::cout << this->_className << " " << this->_name
            << " is asking for High Five !" << std::endl;
}