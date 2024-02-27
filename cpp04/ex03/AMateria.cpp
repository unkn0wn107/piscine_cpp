/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 22:00:41 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Unkn0wn type") {}

AMateria::AMateria(std::string const& type) : _type(type) {}

AMateria::AMateria(const AMateria& src) : _type(src._type) {}

AMateria& AMateria::operator=(const AMateria& rhs) {
  if (this != &rhs) {
    _type = rhs._type;
  }
  return *this;
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const {
  return _type;
}

void AMateria::use(ICharacter& target) {
  std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}