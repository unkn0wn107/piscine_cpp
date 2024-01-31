/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:07:09 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 00:52:41 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) {
  this->weapon = &weapon;
}

void HumanB::attack(void) const {
  std::string weaponType;

  std::cout << this->name;
  if (!this->weapon) {
    std::cout << " has no weapon to attack with ...";
  } else if (this->weapon->getType() == "") {
    std::cout << " attacks with own teeth ";
  } else {
    weaponType = this->weapon->getType();
    std::cout << " attacks with a " << weaponType;
  }
  std::cout << std::endl;
}