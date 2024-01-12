/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:07:09 by agaley            #+#    #+#             */
/*   Updated: 2024/01/12 20:21:51 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) {
  this->weapon = &weapon;
}

void HumanB::attack(void) {
  std::string weaponType;

  std::cout << this->name;
  if (this->weapon) {
    weaponType = this->weapon->getType();
    std::cout << " attacks with their " << weaponType;
  } else
    std::cout << " has no weapon to attack with ...";
  std::cout << std::endl;
}