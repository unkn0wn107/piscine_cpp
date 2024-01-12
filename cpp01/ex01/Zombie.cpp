/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:26:12 by agaley            #+#    #+#             */
/*   Updated: 2024/01/12 18:18:43 by agaley           ###   ########lyon.fr   */
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

void Zombie::announce() {
  std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}