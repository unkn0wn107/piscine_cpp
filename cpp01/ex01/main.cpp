/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:26:24 by agaley            #+#    #+#             */
/*   Updated: 2024/01/12 18:42:37 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
  int         N;
  std::string name;
  Zombie*     horde;
  int         i;

  N = 5;
  name = "Zombie";

  horde = zombieHorde(N, name);

  for (i = 0; i < N; i++) {
    horde[i].announce();
  }

  delete[] horde;
}