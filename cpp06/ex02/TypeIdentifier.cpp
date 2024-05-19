/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeIdentifier.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:35:43 by agaley            #+#    #+#             */
/*   Updated: 2024/05/20 00:31:26 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TypeIdentifier.hpp"

Base* generate(void) {
  switch (rand() % 3) {
    case 0:
      return new A();
    case 1:
      return new B();
    case 2:
      return new C();
    default:
      return NULL;
  }
}

void TypeIdentifier::identify(Base* p) {
  if (dynamic_cast<A*>(p) != NULL)
    std::cout << "A" << std::endl;
  else if (dynamic_cast<B*>(p) != NULL)
    std::cout << "B" << std::endl;
  else if (dynamic_cast<C*>(p) != NULL)
    std::cout << "C" << std::endl;
  else
    std::cout << "Unknown type" << std::endl;
}

void TypeIdentifier::identify(Base& p) {
  try {
    (void)dynamic_cast<A&>(p);
    std::cout << "A" << std::endl;
  } catch (std::bad_cast&) {
    try {
      (void)dynamic_cast<B&>(p);
      std::cout << "B" << std::endl;
    } catch (std::bad_cast&) {
      try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
      } catch (std::bad_cast&) {
        std::cout << "Unknown type" << std::endl;
      }
    }
  }
}