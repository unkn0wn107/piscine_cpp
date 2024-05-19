/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:37:25 by agaley            #+#    #+#             */
/*   Updated: 2024/05/19 19:51:41 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string& literal) {
  double value = 0;

  if (literal == "nan" || literal == "NaN" || literal == "nanf")
    value = std::numeric_limits<double>::quiet_NaN();
  else if (literal == "inf" || literal == "+inf" || literal == "inff" ||
           literal == "+inff")
    value = std::numeric_limits<double>::infinity();
  else if (literal == "-inf" || literal == "-inff")
    value = -std::numeric_limits<double>::infinity();
  else if (literal.size() == 1)
    value = static_cast<double>(static_cast<unsigned char>(literal[0]));
  else {
    std::istringstream iss(literal);
    if (!(iss >> value)) {
      std::cerr << "Invalid input." << std::endl;
      return;
    }
  }

  convertToChar(value);
  convertToInt(value);
  convertToFloat(value);
  convertToDouble(value);
}

void ScalarConverter::convertToChar(double value) {
  if (std::isnan(value) || std::isinf(value) ||
      value < std::numeric_limits<char>::min() ||
      value > std::numeric_limits<char>::max()) {
    std::cout << "char: impossible" << std::endl;
  } else {
    char c = static_cast<char>(value);
    if (std::isprint(c))
      std::cout << "char: '" << c << "'" << std::endl;
    else
      std::cout << "char: Non displayable" << std::endl;
  }
}

void ScalarConverter::convertToInt(double value) {
  if (std::isnan(value) || std::isinf(value) ||
      value < std::numeric_limits<int>::min() ||
      value > std::numeric_limits<int>::max()) {
    std::cout << "int: impossible" << std::endl;
  } else {
    int i = static_cast<int>(value);
    std::cout << "int: " << i << std::endl;
  }
}

void ScalarConverter::convertToFloat(double value) {
  float f = static_cast<float>(value);
  if (std::isnan(f))
    std::cout << "float: nanf" << std::endl;
  else if (std::isinf(f))
    std::cout << "float: " << (f < 0 ? "-inff" : "+inff") << std::endl;
  else
    std::cout << "float: " << std::fixed << std::setprecision(1) << f << 'f'
              << std::endl;
}

void ScalarConverter::convertToDouble(double value) {
  if (std::isnan(value))
    std::cout << "double: nan" << std::endl;
  else if (std::isinf(value))
    std::cout << "double: " << (value < 0 ? "-inf" : "+inf") << std::endl;
  else
    std::cout << "double: " << std::fixed << std::setprecision(1) << value
              << std::endl;
}