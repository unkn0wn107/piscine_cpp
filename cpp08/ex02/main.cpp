/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 23:57:18 by agaley            #+#    #+#             */
/*   Updated: 2024/09/02 00:15:45 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MutantStack.hpp"

int main() {
    MutantStack<int> mstack;
    std::stack<int> s;

    mstack.push(5); s.push(5);
    mstack.push(17); s.push(17);
    std::cout << "MutantStack top: " << mstack.top() << std::endl;
    std::cout << "Standard stack top: " << s.top() << std::endl;

    mstack.pop(); s.pop();
    std::cout << "MutantStack size: " << mstack.size() << std::endl;
    std::cout << "Standard stack size: " << s.size() << std::endl;

    mstack.push(3); s.push(3);
    mstack.push(5); s.push(5);
    mstack.push(737); s.push(737);
    mstack.push(0); s.push(0);
    mstack.push(42); s.push(42);
    mstack.push(21); s.push(21);
    mstack.push(84); s.push(84);
    mstack.push(168); s.push(168);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "MutantStack contents: ";
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    std::stack<int> tempStack;
    std::cout << "Standard stack contents: ";
    while (!s.empty()) {
        tempStack.push(s.top());
        s.pop();
    }
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " ";
        s.push(tempStack.top());
        tempStack.pop();
    }
    std::cout << std::endl;

    return 0;
}
