/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 21:12:41 by agaley            #+#    #+#             */
/*   Updated: 2024/05/19 21:48:22 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "TypeIdentifier.hpp"

int main() {
  srand(static_cast<unsigned int>(time(NULL)));

  Base* randomBase = generate();

  std::cout << "Identifying using pointer:" << std::endl;
  TypeIdentifier::identify(randomBase);

  std::cout << "Identifying using reference:" << std::endl;
  TypeIdentifier::identify(*randomBase);

  delete randomBase;

  return 0;
}