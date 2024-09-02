/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:02:22 by agaley            #+#    #+#             */
/*   Updated: 2024/09/02 13:35:20 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <deque>
#include <ctime>
#include <cstdlib>
#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    try {
        std::vector<int> vec;
        for (int i = 1; i < argc; ++i)
            vec.push_back(atoi(argv[i]));

        PmergeMe pmerge;
        pmerge.sortAndPrint(vec);
    } catch (const std::exception &e) {
        std::cerr << "Error" << std::endl;
    }

    return 0;
}
