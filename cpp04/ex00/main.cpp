/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:16 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 06:18:33 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void) {
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();

  delete meta;
  delete j;
  delete i;

  {
    std::cout << std::endl << "Wrong cats :s" << std::endl;

    WrongCat* wrong_cat = new WrongCat();
    wrong_cat->makeSound();

    WrongAnimal* wrong_animal = new WrongCat();
    wrong_animal->makeSound();

    delete wrong_cat;
    delete wrong_animal;
  }

  {
    std::cout << std::endl << "More tests on cats. Cruel ..." << std::endl;

    Cat originalCat;
    Cat copyConstructedCat(originalCat);
    Cat assignedCat;
    assignedCat = originalCat;

    copyConstructedCat.makeSound();
    assignedCat.makeSound();
    std::cout << copyConstructedCat.getType() << std::endl;
  }

  {
    std::cout << std::endl << "More tests on dogs." << std::endl;

    Dog originalDog;
    Dog copyConstructedDog(originalDog);
    Dog assignedDog;
    assignedDog = originalDog;

    copyConstructedDog.makeSound();
    assignedDog.makeSound();
    std::cout << assignedDog.getType() << std::endl;
  }

  return 0;
}