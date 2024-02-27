/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 03:34:28 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
    : ScavTrap(), FragTrap(), _className("DiamondTrap"), _name("Default") {
  _initStats();
  std::cout << this->_className << " " << this->_name
            << " default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ScavTrap(name), FragTrap(name), _className("DiamondTrap"), _name(name) {
  _initStats();
  ClapTrap::_name = name + "_clap_name";
  std::cout << this->_className << " " << this->_name
            << " name constructor called." << std::endl;
}

void DiamondTrap::_initStats(void) {
  _hitPoints = FragTrap::_hitPoints;
  _energyPoints = ScavTrap::_energyPoints;
  _attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
    : ClapTrap(src),
      ScavTrap(src),
      FragTrap(src),
      _className("DiamondTrap"),
      _name(src._name) {
  std::cout << this->_className << " " << this->_name
            << " copy constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << this->_className << " " << this->_name << " destructor called."
            << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs) {
  if (this != &rhs) {
    ScavTrap::operator=(rhs);
    FragTrap::operator=(rhs);
    _name = rhs._name;
  }
  std::cout << this->_className << " " << this->_name
            << " assignment operator called." << std::endl;
  return *this;
}

void DiamondTrap::attack(const std::string& target) {
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const {
  std::cout << "DiamondTrap name: " << this->_name
            << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}

const std::string& DiamondTrap::getClassName() const {
  return this->_className;
}

const std::string& DiamondTrap::getName() const {
  return this->_name;
}

// unsigned int DiamondTrap::getHitPoints() const {
//   return this->_hitPoints;
// }

unsigned int DiamondTrap::getAttackDamage() const {
  return this->_attackDamage;
}