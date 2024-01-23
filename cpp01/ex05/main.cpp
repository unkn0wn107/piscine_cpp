/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:29:37 by agaley            #+#    #+#             */
/*   Updated: 2024/01/23 17:31:44 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl harl;

    std::cout << "=== debug ===" << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl << "=== Info ===" << std::endl;
    harl.complain("INFO");
    std::cout << std::endl << "=== Warning ===" << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl << "=== Error ===" << std::endl;
    harl.complain("ERROR");
    std::cout << std::endl << "=== Invalid ===" << std::endl;
    harl.complain("NOT A LEVEL");

    return (0);
}