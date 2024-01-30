/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:33:02 by agaley            #+#    #+#             */
/*   Updated: 2024/01/30 18:03:42 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level) {
    void (Harl::*fun[])(void) = { &Harl::error, &Harl::warning, &Harl::info, &Harl::debug } ;
    std::string levels[] = { "ERROR", "WARNING", "INFO", "DEBUG" };

    int j = 0;
    while (j < 4 && levels[j] != level)
        j++;
    switch (j) {
        case 3: {
            (this->*fun[3])();
            __attribute__ ((fallthrough));
        }
        case 2: {
            (this->*fun[2])();
            __attribute__ ((fallthrough));
        }
        case 1: {
            (this->*fun[1])();
            __attribute__ ((fallthrough));
        }
        case 0: {
            (this->*fun[0])();
            __attribute__ ((fallthrough));
        }
        default: {
            break;
        }
    }
    if (j == 4)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::debug(void) {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}
