/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:02 by agaley            #+#    #+#             */
/*   Updated: 2024/01/24 00:53:37 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
 private:
  int              fixedPointValue;
  static const int fractionalBits = 8;

 public:
  // Default constructor
  Fixed();

  // Copy constructor
  Fixed(const Fixed& src);

  // Copy assignment operator
  Fixed& operator=(const Fixed& rhs);

  // Destructor
  ~Fixed();

  // Member function to get raw bits
  int getRawBits(void) const;

  // Member function to set raw bits
  void setRawBits(int const raw);
};

#endif