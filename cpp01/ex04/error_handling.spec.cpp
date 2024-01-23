/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.spec.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:56:40 by agaley            #+#    #+#             */
/*   Updated: 2024/01/23 17:51:20 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

void TestCheckEmptyString() {
  try {
    ErrorHandling::CheckEmptyString("", "Empty string error.");
    assert(false);  // Should not reach this line
  } catch (const std::invalid_argument& e) {
    assert(std::string(e.what()) == "Empty string error.");
  }
  std::cout << "OK : TestCheckEmptyString" << std::endl;
}
void TestCheckNonEmptyString() {
  try {
    ErrorHandling::CheckEmptyString("Non-empty string", "Empty string error.");
    assert(true);  // Should reach this line
  } catch (const std::invalid_argument& e) {
    assert(false);  // Should not reach this line
  }
  std::cout << "OK : TestCheckNonEmptyString" << std::endl;
}