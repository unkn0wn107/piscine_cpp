/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/01/24 00:53:31 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& trap) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &trap) {
    this->_name = trap._name;
    this->_hitPoints = trap._hitPoints;
    this->_energyPoints = trap._energyPoints;
    this->_attackDamage = trap._attackDamage;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "Destructor called" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->_hitPoints > 0) {
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    this->_hitPoints -= amount;
  } else {
    std::cout << "ClapTrap " << this->_name << " is dead ..." << std::endl;
  }
}

void ClapTrap::attack(const std::string& target) {
  if (this->_energyPoints == 0) {
    std::cout << "ClapTrap " << this->_name << " doesn't have energy to attack ..." << std::endl;
  } else if (this->_hitPoints == 0) {
    std::cout << "ClapTrap " << this->_name << " is dead ..." << std::endl;
  } else {
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->_energyPoints == 0) {
    std::cout << "ClapTrap " << this->_name << " doesn't have energy to attack ..." << std::endl;
  } else if (this->_hitPoints == 0) {
    std::cout << "ClapTrap " << this->_name << " is dead ..." << std::endl;
  } else {
    std::cout << "ClapTrap " << this->_name << " is repairing " << amount << " points of damage!" << std::endl;
    this->_energyPoints--;
    this->_hitPoints += amount;
  }
}