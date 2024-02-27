/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 03:36:55 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Unkn0wn_clap_name"), _className("FragTrap") {
  this->_init();
  std::cout << this->_className << " " << this->_name
            << " default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), _className("FragTrap") {
  this->_init();
  std::cout << this->_className << " " << this->_name
            << " name constructor called" << std::endl;
}

void FragTrap::_init() {
  this->_hitPoints = 100;
  this->_energyPoints = 100;
  this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& src)
    : ClapTrap(src), _className("FragTrap") {
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

void FragTrap::highFivesGuys() const {
  std::cout << this->getClassName() << " " << this->getName()
            << " is asking for High Five !" << std::endl;
}