/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 23:19:39 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_H
#define FLOOR_H

#include "AMateria.hpp"

class Floor {
 private:
  static const int MAX_ITEMS = 100;
  AMateria*        _items[MAX_ITEMS];
  int              _count;

  Floor();
  ~Floor();
  Floor(const Floor&);
  Floor& operator=(const Floor&);

 public:
  static Floor& getInstance();
  void          dropItem(AMateria* m);
  void          cleanup();
};

#endif