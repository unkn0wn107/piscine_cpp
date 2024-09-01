/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:10:16 by agaley            #+#    #+#             */
/*   Updated: 2024/09/01 23:53:34 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : N(N) {}

void Span::addNumber(int number) {
    if (numbers.size() >= N)
        throw std::runtime_error("Span is full");
    numbers.push_back(number);
}

unsigned int Span::shortestSpan() {
    if (numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    int minSpan = INT_MAX;
    for (size_t i = 1; i < sortedNumbers.size(); ++i)
        if (sortedNumbers[i] - sortedNumbers[i - 1] < minSpan)
            minSpan = sortedNumbers[i] - sortedNumbers[i - 1];
    return minSpan;
}

unsigned int Span::longestSpan() {
    if (numbers.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
    int min = *std::min_element(numbers.begin(), numbers.end());
    int max = *std::max_element(numbers.begin(), numbers.end());
    return max - min;
}
