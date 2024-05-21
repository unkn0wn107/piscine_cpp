/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 23:17:56 by agaley            #+#    #+#             */
/*   Updated: 2024/05/21 11:51:26 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
  Array<int> intArray(5);
  for (unsigned int i = 0; i < intArray.size(); ++i) {
    intArray[i] = i * 10;
    std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
  }

  Array<int> copiedArray(intArray);
  for (unsigned int i = 0; i < copiedArray.size(); ++i) {
    std::cout << "copiedArray[" << i << "] = " << copiedArray[i] << std::endl;
  }

  intArray[2] = 100;
  std::cout << "After modification:" << std::endl;
  std::cout << "intArray[2] = " << intArray[2] << std::endl;
  std::cout << "copiedArray[2] = " << copiedArray[2] << std::endl;

  try {
    std::cout << "Trying to access out of bounds:" << std::endl;
    std::cout << intArray[10] << std::endl;
  } catch (const std::out_of_range& e) {
    std::cout << "Exception caught: " << e.what() << std::endl;
  }

  Array<std::string> stringArray(3);
  stringArray[0] = "Hello";
  stringArray[1] = "World";
  stringArray[2] = "C++";

  for (unsigned int i = 0; i < stringArray.size(); ++i) {
    std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
  }

  return 0;
}