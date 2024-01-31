/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 19:04:52 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 00:52:29 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
 private:
  const std::string name;
  Weapon*           weapon;

 public:
  HumanB(std::string name);
  ~HumanB();

  void setWeapon(Weapon& weapon);
  void attack() const;
};

#endif