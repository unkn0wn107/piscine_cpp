/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 22:03:03 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("Unkn0wn") {
  for (int i = 0; i < 4; ++i)
    inventory[i] = NULL;
}

Character::Character(std::string const& name) : _name(name) {
  for (int i = 0; i < 4; ++i)
    inventory[i] = NULL;
}

Character::Character(Character const& other) : _name(other._name) {
  copyInventoryFrom(other);
}

Character::~Character() {
  clearInventory();
}

Character& Character::operator=(Character const& other) {
  if (this != &other) {
    _name = other._name;
    clearInventory();
    copyInventoryFrom(other);
  }
  return *this;
}

std::string const& Character::getName() const {
  return _name;
}

void Character::equip(AMateria* m) {
  for (int i = 0; i < 4; ++i) {
    if (inventory[i] == NULL) {
      inventory[i] = m;
      break;
    }
  }
}

void Character::unequip(int index) {
  if (index >= 0 && index < 4)
    inventory[index] = NULL;
}

void Character::use(int index, ICharacter& target) {
  if (index >= 0 && index < 4 && inventory[index] != NULL)
    inventory[index]->use(target);
}

void Character::copyInventoryFrom(const Character& other) {
  for (int i = 0; i < 4; ++i) {
    if (other.inventory[i] != NULL) {
      inventory[i] = other.inventory[i]->clone();
    } else {
      inventory[i] = NULL;
    }
  }
}

void Character::clearInventory() {
  for (int i = 0; i < 4; ++i) {
    if (inventory[i] != NULL) {
      delete inventory[i];
      inventory[i] = NULL;
    }
  }
}