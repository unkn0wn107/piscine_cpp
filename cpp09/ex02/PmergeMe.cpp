/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:02:12 by agaley            #+#    #+#             */
/*   Updated: 2024/09/02 13:29:22 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>
#include <algorithm>
#include <ctime>
#include <deque>
#include <vector>

void PmergeMe::sortAndPrint(const std::vector<int> &input) {
    for (size_t i = 0; i < input.size(); ++i)
        if (input[i] < 0)
            throw std::runtime_error("Error");

    std::vector<int> vec(input);
    std::deque<int> deq(input.begin(), input.end());

    std::cout << "Before: ";
    for (size_t i = 0; i < input.size(); ++i)
        std::cout << input[i] << " ";
    std::cout << std::endl;

    clock_t startVec = clock();
    fordJohnsonSort(vec);
    clock_t endVec = clock();

    clock_t startDeq = clock();
    fordJohnsonSort(deq);
    clock_t endDeq = clock();

    std::cout << "After: ";
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    std::cout << "Time to process a range of " << input.size() << " elements with std::vector: "
              << (endVec - startVec) * 1000.0 / CLOCKS_PER_SEC << " us" << std::endl;
    std::cout << "Time to process a range of " << input.size() << " elements with std::deque: "
              << (endDeq - startDeq) * 1000.0 / CLOCKS_PER_SEC << " us" << std::endl;
}

void PmergeMe::fordJohnsonSort(std::vector<int> &vec) {
    if (vec.size() <= 1) return;

    std::vector<int> pairs;
    std::vector<int> singles;

    for (size_t i = 0; i + 1 < vec.size(); i += 2) {
        if (vec[i] > vec[i + 1]) {
            pairs.push_back(vec[i + 1]);
            singles.push_back(vec[i]);
        } else {
            pairs.push_back(vec[i]);
            singles.push_back(vec[i + 1]);
        }
    }

    if (vec.size() % 2 != 0)
        singles.push_back(vec.back());

    std::sort(pairs.begin(), pairs.end());

    for (size_t i = 0; i < singles.size(); ++i) {
        std::vector<int>::iterator pos = std::upper_bound(pairs.begin(), pairs.end(), singles[i]);
        pairs.insert(pos, singles[i]);
    }

    vec = pairs;
}

void PmergeMe::fordJohnsonSort(std::deque<int> &deq) {
    if (deq.size() <= 1) return;

    std::deque<int> pairs;
    std::deque<int> singles;

    for (size_t i = 0; i + 1 < deq.size(); i += 2) {
        if (deq[i] > deq[i + 1]) {
            pairs.push_back(deq[i + 1]);
            singles.push_back(deq[i]);
        } else {
            pairs.push_back(deq[i]);
            singles.push_back(deq[i + 1]);
        }
    }

    if (deq.size() % 2 != 0)
        singles.push_back(deq.back());

    std::sort(pairs.begin(), pairs.end());

    for (size_t i = 0; i < singles.size(); ++i) {
        std::deque<int>::iterator pos = std::upper_bound(pairs.begin(), pairs.end(), singles[i]);
        pairs.insert(pos, singles[i]);
    }

    deq = pairs;
}
