/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 11:59:53 by agaley            #+#    #+#             */
/*   Updated: 2024/05/15 13:17:47 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
  try {
    Bureaucrat highRank("Maximus", 1);
    std::cout << highRank << std::endl;
    highRank.decrementGrade();
    std::cout << highRank << std::endl;
    highRank.incrementGrade();
    std::cout << highRank << std::endl;
    highRank.incrementGrade();
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  std::cout << "--------------------" << std::endl;

  try {
    Bureaucrat lowRank("Minimus", 150);
    std::cout << lowRank << std::endl;
    lowRank.incrementGrade();
    std::cout << lowRank << std::endl;
    lowRank.decrementGrade();
    std::cout << lowRank << std::endl;
    lowRank.decrementGrade();
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  std::cout << "--------------------" << std::endl;

  try {
    Bureaucrat defaultBureaucrat;
    std::cout << defaultBureaucrat << std::endl;
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  std::cout << "--------------------" << std::endl;

  try {
    Bureaucrat tooHigh("TooHigh", -1);
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  try {
    Bureaucrat tooLow("TooLow", 151);
  } catch (const std::exception& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  return 0;
}