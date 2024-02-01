/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:16 by agaley            #+#    #+#             */
/*   Updated: 2024/02/01 19:54:51 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap trap1("CT1");

  trap1.takeDamage(9);
  trap1.beRepaired(2);
  trap1.attack("John");
  trap1.takeDamage(3);
  trap1.attack("John");

  ClapTrap trap2("CT2");

  trap2.takeDamage(20);
  trap2.attack("John");

  return 0;
}