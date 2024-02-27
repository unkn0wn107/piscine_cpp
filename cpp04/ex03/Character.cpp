/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 14:03:11 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character(std::string const & name) : name(name) {
    for (int i = 0; i < 4; ++i)
        inventory[i] = nullptr;
}

Character::Character(Character const & other) : name(other.name) {
    copyInventoryFrom(other);
}

Character::~Character() {
    clearInventory();
}

Character & Character::operator=(Character const & other) {
    if (this != &other) {
        name = other.name;
        clearInventory();
        copyInventoryFrom(other);
    }
    return *this;
}

std::string const & Character::getName() const {
    return name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (inventory[i] == nullptr) {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        inventory[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && inventory[idx] != nullptr) {
        inventory[idx]->use(target);
    }
}

void Character::copyInventoryFrom(const Character & other) {
    for (int i = 0; i < 4; ++i) {
        if (other.inventory[i] != nullptr) {
            inventory[i] = other.inventory[i]->clone();
        } else {
            inventory[i] = nullptr;
        }
    }
}

void Character::clearInventory() {
    for (int i = 0; i < 4; ++i) {
        if (inventory[i] != nullptr) {
            delete inventory[i];
            inventory[i] = nullptr;
        }
    }
}
