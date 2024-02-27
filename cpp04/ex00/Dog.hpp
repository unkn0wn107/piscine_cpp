/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:02 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 05:35:58 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog();
  ~Dog();
  Dog(const Dog& trap);
  Dog& operator=(const Dog& trap);

  std::string getType() const;
  void        makeSound() const;
};

#endif