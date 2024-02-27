/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 23:20:06 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor() : _count(0) {
  for (int i = 0; i < MAX_ITEMS; ++i) {
    _items[i] = NULL;
  }
}

Floor::~Floor() {
  cleanup();
}

Floor& Floor::getInstance() {
  static Floor instance;
  return instance;
}

void Floor::dropItem(AMateria* m) {
  if (_count < MAX_ITEMS) {
    _items[_count++] = m;
  } else {
    delete m;
  }
}

void Floor::cleanup() {
  for (int i = 0; i < _count; ++i) {
    delete _items[i];
    _items[i] = NULL;
  }
  _count = 0;
}