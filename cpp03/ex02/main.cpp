/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:16 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 03:56:51 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
  FragTrap trap1 = FragTrap("FT1");
  FragTrap trap2 = FragTrap("FT2");

  std::cout << std::endl << "trap1 kills trap2" << std::endl;
  trap1.attack("FT2");
  trap2.takeDamage(30);
  trap2.beRepaired(10);
  trap2.highFivesGuys();
  trap1.attack("FT2");
  trap2.takeDamage(30);
  trap1.attack("FT2");
  trap2.takeDamage(30);
  trap1.beRepaired(5);
  trap1.highFivesGuys();
  trap2.attack("FT1");
  trap1.takeDamage(30);
  trap1.beRepaired(5);
  trap2.highFivesGuys();
  trap1.attack("FT2");
  trap2.takeDamage(30);
  trap2.beRepaired(5);

  std::cout << std::endl << "trap3 dies" << std::endl;
  FragTrap trap3 = FragTrap("FT3");
  trap3.takeDamage(150);
  trap3.attack("FT1");
  trap3.takeDamage(30);
  trap3.beRepaired(5);

  std::cout << std::endl << "trap3 clone by copy" << std::endl;
  FragTrap(trap3).beRepaired(5);

  {
    std::cout << std::endl << "trap3 clone by assignement" << std::endl;
    FragTrap trapAssigned;
    trapAssigned = trap3;
    trapAssigned.beRepaired(5);
  }

  std::cout << std::endl << "Battle finished!" << std::endl;

  return 0;
}