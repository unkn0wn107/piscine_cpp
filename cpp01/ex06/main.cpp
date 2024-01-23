/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:29:37 by agaley            #+#    #+#             */
/*   Updated: 2024/01/23 17:40:15 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    Harl harl;

    if (ac != 2)
    {
        std::cout << "Provide one parameter. Available levels : DEBUG / INFO / WARNING / ERROR" << std::endl;
        return (1);
    }

    harl.complain(av[1]);

    return (0);
}