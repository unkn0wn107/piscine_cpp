/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:10:20 by agaley            #+#    #+#             */
/*   Updated: 2024/09/01 23:44:10 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <climits>
#include <stdexcept>
#include <vector>
#include <algorithm>

class Span {
public:
    Span(unsigned int N);
    void addNumber(int number);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    template <typename Iterator>
    void addNumbers(Iterator begin, Iterator end);

private:
    unsigned int N;
    std::vector<int> numbers;
};

template <typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end) {
  while (begin != end) {
    addNumber(*begin);
    ++begin;
  }
}

#endif
