/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:08:15 by agaley            #+#    #+#             */
/*   Updated: 2024/09/02 12:19:07 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "RPN.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    RPN rpn;
    try {
        std::cout << rpn.calculate(argv[1]) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Error" << std::endl;
    }

    return 0;
}
