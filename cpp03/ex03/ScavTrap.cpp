/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/06 02:18:13 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Unkn0wn", 100, 50, 20) {
  this->_className = "ScavTrap";
  std::cout << this->_className << " " << this->_name
            << " default constructor called." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name, 100, 50, 20) {
  this->_className = "ScavTrap";
  std::cout << this->_className << " " << this->_name
            << " name constructor called." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name, int hp, int ep, int ad)
    : ClapTrap(name, hp, ep, ad) {
  this->_className = "ScavTrap";
  std::cout << this->_className << " " << this->_name
            << " name constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src) {
  this->_className = "ScavTrap";
  std::cout << this->_className << " " << this->_name
            << " copy constructor called." << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << this->_className << " " << this->_name << " destructor called."
            << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
  if (this != &rhs) {
    ClapTrap::operator=(rhs);
  }
  std::cout << this->_className << " " << this->_name
            << " assignment operator called." << std::endl;
  return *this;
}

void ScavTrap::guardGate() {
  std::cout << this->_className << " " << this->_name
            << " has entered Gate Keeper mode." << std::endl;
}