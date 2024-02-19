/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/19 21:05:15 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
    : ClapTrap("Unkn0wn_clap_name") {
  this->_init();
  std::cout << "ScavTrap " << this->_name << " default constructor called"
            << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name + "_scav_name") {
  this->_init();
  std::cout << "ScavTrap " << this->_name << " name constructor called"
            << std::endl;
}

void ScavTrap::_init() {
  this->_hitPoints = 100;
  this->_energyPoints = 50;
  this->_attackDamage = 20;
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

void ScavTrap::attack(const std::string& target) {
  if (this->_energyPoints == 0) {
    std::cout << this->_hitPoints << " " << this->_name
              << " doesn't have energy to attack ..." << std::endl;
  } else if (this->_hitPoints == 0) {
    std::cout << this->_className << " " << this->_name << " is dead ..."
              << std::endl;
  } else {
    std::cout << this->_name << " " << this->_name << " attacks " << target
              << ", causing " << this->_attackDamage << " points of damage!"
              << std::endl;
    this->_energyPoints--;
  }
}

void ScavTrap::guardGate() const {
  std::cout << this->_className << " " << this->_name
            << " has entered Gate Keeper mode." << std::endl;
}