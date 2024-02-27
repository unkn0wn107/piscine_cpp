/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:02 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 07:17:22 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include "Brain.hpp"

class AAnimal {
 protected:
  std::string _type;
  Brain*      _brain;
  AAnimal();

 public:
  AAnimal(const AAnimal& src);
  AAnimal& operator=(const AAnimal& src);
  virtual ~AAnimal();

  virtual std::string getType() const = 0;
  virtual void        makeSound() const = 0;
  void                teachIdea(const std::string& idea) const;
  std::string         getIdea(int index) const;
};

#endif