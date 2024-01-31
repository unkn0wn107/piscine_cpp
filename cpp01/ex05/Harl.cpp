/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:33:02 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 01:26:25 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(const std::string level) const {
  void (Harl::*fun[])(void)
      const = {&Harl::error, &Harl::warning, &Harl::info, &Harl::debug};
  std::string levels[] = {"ERROR", "WARNING", "INFO", "DEBUG"};

  for (int i = 0; i < 4; i++) {
    if (levels[i] == level)
      (this->*fun[i])();
  }
}

void Harl::debug(void) const {
  std::cout
      << "DEBUG: I love having extra bacon for my "
         "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
      << std::endl;
}

void Harl::info(void) const {
  std::cout << "INFO: I cannot believe adding extra bacon costs more money. "
               "You didn't put enough bacon in my burger! If you did, I "
               "wouldn't be asking for more!"
            << std::endl;
}

void Harl::warning(void) const {
  std::cout << "WARNING: I think I deserve to have some extra bacon for free. "
               "I've been coming for years whereas you started working here "
               "since last month."
            << std::endl;
}

void Harl::error(void) const {
  std::cout
      << "ERROR: This is unacceptable! I want to speak to the manager now."
      << std::endl;
}
