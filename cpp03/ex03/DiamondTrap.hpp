/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:02 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 03:34:04 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
 private:
  std::string _className;
  std::string _name;

 protected:
  const std::string& getClassName() const;
  const std::string& getName() const;
  // unsigned int       getHitPoints() const;
  unsigned int getAttackDamage() const;

 public:
  DiamondTrap();
  DiamondTrap(const std::string& name);
  DiamondTrap(const DiamondTrap& src);
  DiamondTrap& operator=(const DiamondTrap& rhs);
  ~DiamondTrap();

  void _initStats(void);
  void attack(const std::string& target);
  void whoAmI() const;
};

#endif