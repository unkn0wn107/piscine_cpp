/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:02 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 06:58:49 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include "Brain.hpp"

class Animal {
 protected:
  std::string _type;
  Brain*      _brain;

 public:
  Animal();
  Animal(const Animal& src);
  Animal& operator=(const Animal& src);
  virtual ~Animal();

  virtual std::string getType() const;
  virtual void        makeSound() const;
  void                teachIdea(const std::string& idea) const;
  std::string         getIdea(int index) const;
};

#endif