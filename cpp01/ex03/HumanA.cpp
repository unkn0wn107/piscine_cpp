/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:00:51 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 00:54:13 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon& weapon)
    : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack(void) const {
  std::cout << this->name << " attacks with their " << this->weapon.getType()
            << std::endl;
}