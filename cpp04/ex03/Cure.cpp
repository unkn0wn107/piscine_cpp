/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 22:09:15 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria(other) {}

Cure& Cure::operator=(const Cure& other) {
  if (this != &other) {
    AMateria::operator=(other);
  }
  return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const {
  return new Cure(*this);
}

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}