/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:29:57 by agaley            #+#    #+#             */
/*   Updated: 2024/05/20 22:52:16 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main() {
  int          intArray[] = {1, 2, 3, 4, 5};
  unsigned int intArraySize = sizeof(intArray) / sizeof(intArray[0]);
  std::cout << "Integer array elements:" << std::endl;
  iter(intArray, intArraySize, static_cast<void (*)(int&)>(printElement));

  std::string  stringArray[] = {"Hello", "World", "C++", "Templating"};
  unsigned int stringArraySize = sizeof(stringArray) / sizeof(stringArray[0]);
  std::cout << "String array elements:" << std::endl;
  iter(stringArray, stringArraySize,
       static_cast<void (*)(std::string&)>(printElement));

  double doubleArray[] = {1.15234523, 2.22523523, 3.7373457345, 4.3457345734573,
                          5.52456456};
  unsigned int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);
  std::cout << "Double array elements:" << std::endl;
  iter(doubleArray, doubleArraySize,
       static_cast<void (*)(double&)>(printElement));

  return 0;
}