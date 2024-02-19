/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/19 15:13:38 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap(),_className("DiamondTrap") {
  std::cout << this->_className << " " << this->_name
            << " default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ScavTrap(), FragTrap(),
  _className("DiamondTrap"), _name(name) {
  std::cout << this->_className << " " << this->_name
            << " name constructor called." << std::endl;
}

void DiamondTrap::_initStats(void) {
  this->_hitPoints = FragTrap::_hitPoints;
  this->_energyPoints = ScavTrap::_energyPoints;
  this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
    : ClapTrap(src), ScavTrap(src), FragTrap(src) {
  this->_className = "DiamondTrap";
  std::cout << this->_className << " " << this->_name
            << " copy constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << this->_className << " " << this->_name << " destructor called."
            << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
  if (this != &rhs) {
    DiamondTrap::operator=(rhs);
  }
  std::cout << this->_className << " " << this->_name
            << " assignment operator called." << std::endl;
  return *this;
}

void DiamondTrap::attack(const std::string& target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
  std::cout << this->_className << " " << this->_name << " has inherited from "
            << ClapTrap::_name << std::endl;
}