/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:16 by agaley            #+#    #+#             */
/*   Updated: 2024/02/06 02:28:41 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
  DiamondTrap trap1 = DiamondTrap("DT1");
  DiamondTrap trap2 = DiamondTrap("DT2");

  std::cout << std::endl << "Who are you ?" << std::endl;
  trap1.whoAmI();
  trap2.whoAmI();

  std::cout << std::endl << "trap1 kills trap2" << std::endl;
  trap1.attack("DT2");
  trap2.takeDamage(30);
  trap2.beRepaired(10);
  trap2.highFivesGuys();
  trap1.attack("DT2");
  trap2.takeDamage(30);
  trap1.attack("DT2");
  trap2.takeDamage(30);
  trap1.beRepaired(5);
  trap1.highFivesGuys();
  trap2.attack("DT1");
  trap1.takeDamage(30);
  trap1.beRepaired(5);
  trap2.highFivesGuys();
  trap1.attack("DT2");
  trap2.takeDamage(30);
  trap2.beRepaired(5);

  std::cout << std::endl << "trap3 dies" << std::endl;
  DiamondTrap trap3 = DiamondTrap("DT3");
  trap3.takeDamage(150);
  trap3.attack("DT1");
  trap3.takeDamage(30);
  trap3.beRepaired(5);

  std::cout << std::endl << "trap3 clones" << std::endl;
  DiamondTrap trapCopy = DiamondTrap(trap3);
  trapCopy.attack("DT1");

  DiamondTrap trapAssigned = trap3;
  trapCopy.attack("DT1");

  std::cout << std::endl << "Battle finished!" << std::endl;

  return 0;
}