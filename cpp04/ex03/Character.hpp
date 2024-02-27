/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 23:05:56 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class Character : virtual public ICharacter {
 private:
  std::string _name;
  AMateria*   _inventory[4];
  void        _copyInventoryFrom(const Character& other);
  void        _clearInventory();

 public:
  Character();
  Character(std::string const& name);
  Character(Character const& other);
  ~Character();
  Character& operator=(Character const& other);

  std::string const& getName() const;
  void               equip(AMateria* m);
  void               unequip(int idx);
  void               use(int idx, ICharacter& target);
};

#endif