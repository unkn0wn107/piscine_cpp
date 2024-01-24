/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:12 by agaley            #+#    #+#             */
/*   Updated: 2024/01/24 01:00:05 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0) {
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &rhs) {
    this->fixedPointValue = rhs.getRawBits();
  }
  return *this;
}

Fixed::Fixed(const int value) {
  std::cout << "Int constructor called" << std::endl;
  this->fixedPointValue = value << this->fractionalBits;
}

Fixed::Fixed(const float value) {
  std::cout << "Float constructor called" << std::endl;
  this->fixedPointValue = roundf(value * (1 << this->fractionalBits));
}

Fixed::~Fixed() {
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
  return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
  this->fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
  return (float)this->fixedPointValue / (1 << this->fractionalBits);
}

int Fixed::toInt(void) const {
  return this->fixedPointValue >> this->fractionalBits;
}

std::ostream& operator<<(std::ostream& out, Fixed const& value) {
  out << value.toFloat();
  return out;
}