/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:52:27 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 00:55:01 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const {
  return this->type;
}

void Weapon::setType(const std::string type) {
  this->type = type;
}