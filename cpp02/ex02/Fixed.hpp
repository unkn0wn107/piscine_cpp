/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:02 by agaley            #+#    #+#             */
/*   Updated: 2024/01/24 16:18:35 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <cmath>
#include <iostream>

class Fixed {
 private:
  int              fixedPointValue;
  static const int fractionalBits = 8;

 public:
  Fixed();
  Fixed(const Fixed& src);
  Fixed(const int intVal);
  Fixed(const float floatVal);
  Fixed& operator=(const Fixed& rhs);
  ~Fixed();

  int   getRawBits(void) const;
  void  setRawBits(int const raw);
  float toFloat(void) const;
  int   toInt(void) const;

  bool operator>(const Fixed& rhs) const;
  bool operator<(const Fixed& rhs) const;
  bool operator>=(const Fixed& rhs) const;
  bool operator<=(const Fixed& rhs) const;
  bool operator==(const Fixed& rhs) const;
  bool operator!=(const Fixed& rhs) const;

  Fixed operator+(const Fixed& rhs) const;
  Fixed operator-(const Fixed& rhs) const;
  Fixed operator*(const Fixed& rhs) const;
  Fixed operator/(const Fixed& rhs) const;

  Fixed& operator++();
  Fixed  operator++(int);
  Fixed& operator--();
  Fixed  operator--(int);

  static Fixed&       min(Fixed& a, Fixed& b);
  static const Fixed& min(const Fixed& a, const Fixed& b);
  static Fixed&       max(Fixed& a, Fixed& b);
  static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif