/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:08:08 by agaley            #+#    #+#             */
/*   Updated: 2024/09/02 12:17:41 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <sstream>
#include <cstdlib>

int RPN::calculate(const std::string &expression) {
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (token.size() == 1 && std::isdigit(token[0])) {
            stack.push(token[0] - '0');
        } else if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (stack.size() < 2)
                handleError("Not enough operands");
            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();
            if (token == "+") stack.push(a + b);
            else if (token == "-") stack.push(a - b);
            else if (token == "*") stack.push(a * b);
            else if (token == "/") {
                if (b == 0)
                    handleError("Division by zero");
                stack.push(a / b);
            }
        } else {
            handleError("Invalid token");
        }
    }

    if (stack.size() != 1)
        handleError("Invalid expression");
    return stack.top();
}

void RPN::handleError(const std::string &message) {
    throw std::runtime_error(message);
}
