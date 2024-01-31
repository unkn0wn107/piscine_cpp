/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:26:08 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 00:41:35 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <string>

class Zombie {
 private:
  std::string name;

 public:
  Zombie();
  Zombie(std::string name);
  ~Zombie();

  void announce(void) const;
};

Zombie* zombieHorde(int N, std::string name);

#endif