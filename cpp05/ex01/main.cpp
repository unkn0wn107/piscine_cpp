/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:59:53 by agaley            #+#    #+#             */
/*   Updated: 2024/05/15 13:50:41 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  Form spqr123("SPQR 123", 150, 150);
  Form spqr246("SPQR 246", 137, 137);
  Form spqr369("SPQR 369", 50, 50);
  Form spqr482("SPQR 482", 1, 1);

  try {
    Bureaucrat minimus("Minimus", 150);
    minimus.signForm(spqr123);
    minimus.signForm(spqr246);
    std::cout << spqr123 << std::endl;
    std::cout << spqr246 << std::endl;
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  std::cout << "--------------------" << std::endl;

  try {
    Bureaucrat minimus2("Minimus 2", 100);
    minimus2.signForm(spqr123);
    minimus2.signForm(spqr246);
    std::cout << spqr123 << std::endl;
    std::cout << spqr246 << std::endl;
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  std::cout << "--------------------" << std::endl;

  try {
    Bureaucrat minimus3("Minimus 3", 75);
    minimus3.signForm(spqr369);
    std::cout << spqr369 << std::endl;
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  std::cout << "--------------------" << std::endl;

  try {
    Bureaucrat highRank("Maximus", 1);
    highRank.signForm(spqr482);
    std::cout << spqr482 << std::endl;
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  return 0;
}