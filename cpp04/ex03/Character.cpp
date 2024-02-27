/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 23:26:35 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "Floor.hpp"

Character::Character() : _name("Unkn0wn") {
  for (int i = 0; i < 4; ++i)
    _inventory[i] = NULL;
}

Character::Character(std::string const& name) : _name(name) {
  for (int i = 0; i < 4; ++i)
    _inventory[i] = NULL;
}

Character::Character(Character const& other) : _name(other._name) {
  _copyInventoryFrom(other);
}

Character::~Character() {
  _clearInventory();
}

Character& Character::operator=(Character const& other) {
  if (this != &other) {
    _name = other._name;
    _clearInventory();
    _copyInventoryFrom(other);
  }
  return *this;
}

std::string const& Character::getName() const {
  return _name;
}

void Character::equip(AMateria* m) {
  for (int i = 0; i < 4; ++i) {
    if (_inventory[i] == NULL) {
      _inventory[i] = m;
      return;
    }
  }
  std::cout << "Inventory is full, dropping item on the floor" << std::endl;
  Floor::getInstance().dropItem(m);
}

void Character::unequip(int index) {
  if (index >= 0 && index < 4 && _inventory[index] != NULL) {
    std::cout << "Unequip item, dropping item on the floor" << std::endl;
    Floor::getInstance().dropItem(_inventory[index]);
    _inventory[index] = NULL;
  }
}

void Character::use(int index, ICharacter& target) {
  if (index >= 0 && index < 4 && _inventory[index] != NULL) {
    _inventory[index]->use(target);
  } else {
    std::cout << "Nothing to use : invalid index or nothing in slot"
              << std::endl;
  }
}

void Character::_copyInventoryFrom(const Character& other) {
  for (int i = 0; i < 4; ++i) {
    if (other._inventory[i] != NULL) {
      _inventory[i] = other._inventory[i]->clone();
    } else {
      _inventory[i] = NULL;
    }
  }
}

void Character::_clearInventory() {
  for (int i = 0; i < 4; ++i) {
    if (_inventory[i] != NULL) {
      delete _inventory[i];
      _inventory[i] = NULL;
    }
  }
}