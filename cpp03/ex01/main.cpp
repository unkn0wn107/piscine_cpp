/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:16 by agaley            #+#    #+#             */
/*   Updated: 2024/02/06 01:08:56 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
  ScavTrap trap1 = ScavTrap("ST1");
  ScavTrap trap2 = ScavTrap("ST2");

  trap1.attack("ST2");
  trap2.takeDamage(20);
  trap2.beRepaired(10);
  trap2.guardGate();

  trap1.attack("ST2");
  trap2.takeDamage(20);
  trap1.beRepaired(20);
  trap1.guardGate();
  trap2.attack("ST1");
  trap1.takeDamage(20);
  trap1.beRepaired(5);

  ScavTrap trap3 = ScavTrap("ST3");
  trap3.takeDamage(150);
  trap3.attack("ST1");
  trap3.takeDamage(15);
  trap3.beRepaired(5);

  return 0;
}