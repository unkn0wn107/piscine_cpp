/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                          :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/01/24 00:53:31 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _className("ClapTrap"),
      _name("Unkn0wn"),
      _hitPoints(10),
      _energyPoints(10),
      _attackDamage(0) {
  std::cout << "ClapTrap " << this->_name << " default constructor called"
            << std::endl;
}

ClapTrap::ClapTrap(const std::string name)
    : _className("ClapTrap"),
      _name(name),
      _hitPoints(10),
      _energyPoints(10),
      _attackDamage(0) {
  std::cout << "ClapTrap " << this->_name << " name constructor called"
            << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
  *this = src;
  std::cout << "ClapTrap " << this->_name << " copy constructor called"
            << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& trap) {
  if (this != &trap) {
    this->_name = trap._name;
    this->_hitPoints = trap._hitPoints;
    this->_energyPoints = trap._energyPoints;
    this->_attackDamage = trap._attackDamage;
  }
  std::cout << "ClapTrap " << this->_name << " copy assignment operator called"
            << std::endl;
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "ClapTrap " << this->_name << " destructor called" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->_hitPoints > 0) {
    std::cout << this->_className << " " << this->_name << " takes " << amount
              << " points of damage!" << std::endl;
    if (amount >= this->_hitPoints) {
      this->_hitPoints = 0;
    } else {
      this->_hitPoints -= amount;
    }
  } else {
    std::cout << this->_className << " " << this->_name
              << " is already dead ..." << std::endl;
  }
}

void ClapTrap::attack(const std::string& target) {
  if (this->_energyPoints == 0) {
    std::cout << this->_className << " " << this->_name
              << " doesn't have energy to attack ..." << std::endl;
  } else if (this->_hitPoints == 0) {
    std::cout << this->_className << " " << this->_name << " is dead ..."
              << std::endl;
  } else {
    std::cout << this->_className << " " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!"
              << std::endl;
    this->_energyPoints--;
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->_energyPoints == 0) {
    std::cout << this->_className << " " << this->_name
              << " doesn't have energy to be repaired ..." << std::endl;
  } else if (this->_hitPoints == 0) {
    std::cout << this->_className << " " << this->_name
              << " is dead and cannot be repaired ..." << std::endl;
  } else {
    std::cout << this->_className << " " << this->_name << " is repairing "
              << amount << " points of damage!" << std::endl;
    this->_energyPoints--;
    this->_hitPoints += amount;
  }
}