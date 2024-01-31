/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:58:36 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 00:53:46 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
 private:
  const std::string name;
  Weapon&           weapon;

 public:
  HumanA(const std::string name, Weapon& weapon);
  ~HumanA();

  void attack() const;
};

#endif