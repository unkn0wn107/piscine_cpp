/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:26:12 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 00:41:45 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) {
  this->name = name;
}

Zombie::~Zombie() {
  std::cout << this->name << std::endl;
}

void Zombie::announce() const {
  std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}