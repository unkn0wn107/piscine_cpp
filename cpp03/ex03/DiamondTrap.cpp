/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/06 01:14:29 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap() {
  this->_init("Unknown");
  std::cout << this->_className << " " << this->_name
            << " default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ScavTrap(), FragTrap() {
  this->_init(name);
  std::cout << this->_className << " " << this->_name
            << " name constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string& name, int hp, int ep, int ad)
    : ScavTrap(name, hp, ep, ad + 10), FragTrap(name, hp, ep, ad) {
  this->_init(name);
};

void DiamondTrap::_init(const std::string& name) {
  this->_className = "DiamondTrap";
  this->_name = name;
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

void DiamondTrap::whoAmI() const {
  std::cout << this->_className << " " << this->_name << " has inherited from "
            << FragTrap::_name << std::endl;
}