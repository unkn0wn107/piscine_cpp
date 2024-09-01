/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:10:07 by agaley            #+#    #+#             */
/*   Updated: 2024/09/01 23:48:03 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

int main() {
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span largeSpan = Span(50000);
    std::vector<int> numbers;
    numbers.reserve(50000);
    srand(time(NULL));
    for (int i = 0; i < 50000; ++i)
        numbers.push_back(rand() % 100000);
    largeSpan.addNumbers(numbers.begin(), numbers.end());
    std::cout << largeSpan.shortestSpan() << std::endl;
    std::cout << largeSpan.longestSpan() << std::endl;

    return 0;
}
