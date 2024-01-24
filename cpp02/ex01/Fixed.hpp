/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:02 by agaley            #+#    #+#             */
/*   Updated: 2024/01/24 01:00:55 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed {
 private:
  int              fixedPointValue;
  static const int fractionalBits = 8;

 public:
  Fixed();
  Fixed(const Fixed& src);
  Fixed(const int value);
  Fixed(const float value);
  Fixed& operator=(const Fixed& rhs);
  ~Fixed();

  int  getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int   toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, Fixed const& value);

#endif