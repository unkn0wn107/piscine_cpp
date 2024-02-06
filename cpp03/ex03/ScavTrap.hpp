/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:02 by agaley            #+#    #+#             */
/*   Updated: 2024/02/06 02:25:37 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 private:
  void _initStats();

 public:
  ScavTrap();
  ScavTrap(const std::string& name);
  ScavTrap(const std::string& name, int hp, int ep, int ad);
  ScavTrap(const ScavTrap& src);
  ScavTrap& operator=(const ScavTrap& rhs);
  ~ScavTrap();

  void guardGate();
};

#endif