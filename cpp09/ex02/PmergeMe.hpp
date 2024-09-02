/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:02:15 by agaley            #+#    #+#             */
/*   Updated: 2024/09/02 13:24:03 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>

class PmergeMe {
public:
    void sortAndPrint(const std::vector<int> &input);

private:
    void fordJohnsonSort(std::vector<int> &vec);
    void fordJohnsonSort(std::deque<int> &deq);
};

#endif
