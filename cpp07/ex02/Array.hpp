/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 23:17:53 by agaley            #+#    #+#             */
/*   Updated: 2024/05/21 11:50:34 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {
 private:
  T*           _elements;
  unsigned int _size;

 public:
  Array() : _elements(NULL), _size(0) {}

  Array(unsigned int n) : _size(n) { _elements = new T[n](); }

  Array(const Array& other) : _elements(NULL), _size(0) { *this = other; }

  ~Array() { delete[] _elements; }

  Array& operator=(const Array& other) {
    if (this != &other) {
      delete[] _elements;
      _size = other._size;
      _elements = new T[_size];
      for (unsigned int i = 0; i < _size; i++) {
        _elements[i] = other._elements[i];
      }
    }
    return *this;
  }

  T& operator[](unsigned int index) {
    if (index >= _size || !_elements)
      throw std::out_of_range("Index out of bounds");
    return _elements[index];
  }

  const T& operator[](unsigned int index) const {
    if (index >= _size || !_elements)
      throw std::out_of_range("Index out of bounds");
    return _elements[index];
  }

  unsigned int size() const { return _size; }
};

#endif