/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:16 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 23:31:05 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
  {
    std::cout << std::endl << "Leak test" << std::endl;

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    delete j;  // should not create a leak
    delete i;
  }

  {
    std::cout << std::endl << "Array test" << std::endl;
    const int      arraySize = 4;
    const AAnimal* animals[4];

    for (int i = 0; i < arraySize / 2; ++i) {
      animals[i] = new Dog();
    }

    for (int i = arraySize / 2; i < arraySize; ++i) {
      animals[i] = new Cat();
    }

    for (int i = 0; i < arraySize; ++i) {
      std::cout << animals[i]->getType() << " makes sound ";
      animals[i]->makeSound();
    }

    for (int i = 0; i < arraySize; ++i) {
      delete animals[i];
    }
  }

  {
    std::cout << std::endl << "Deep copies test for Dog" << std::endl;
    Dog dog;
    dog.teachIdea("Sit");
    dog.teachIdea("Catch");

    Dog dogCopy(dog);
    std::cout << "Original Dog Idea 1: " << dog.getIdea(0) << std::endl;
    std::cout << "Copied Dog Idea 1: " << dogCopy.getIdea(0) << std::endl;
    std::cout << "Original Dog Idea 2: " << dog.getIdea(1) << std::endl;
    std::cout << "Copied Dog Idea 2: " << dogCopy.getIdea(1) << std::endl;
  }

  {
    std::cout << std::endl
              << "Another deep copy test with idea verification" << std::endl;
    Cat felix;
    felix.teachIdea("Play with woolen ball");

    Cat gros_minet = felix;
    std::cout << "Original Cat 'Felix' Idea: " << felix.getIdea(0) << std::endl;
    felix.teachIdea("Catch mouse");
    std::cout << "Original Cat 'Felix' New Idea: " << felix.getIdea(1)
              << std::endl;
    std::cout << "Copied Cat 'Gros Minet' Idea 1: " << gros_minet.getIdea(0)
              << std::endl;
    std::cout << "Copied Cat 'Gros Minet' Should Not Have New Idea: "
              << gros_minet.getIdea(1) << std::endl;
  }

  return 0;
}