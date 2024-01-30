/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:13:32 by agaley            #+#    #+#             */
/*   Updated: 2024/01/30 17:44:03 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
  Zombie*     horde;
  std::string zombieName;

  if (N < 0)
    return NULL;
  horde = new Zombie[N];
  for (int i = 0; i < N; i++) {
    std::stringstream ss;
    ss << i + 1;
    zombieName = name + ss.str();
    horde[i] = Zombie(zombieName);
  }
  return horde;
}