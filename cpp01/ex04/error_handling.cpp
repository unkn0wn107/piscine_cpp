/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:56:32 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 01:09:16 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void ErrChk::emptyString(const std::string& str, const std::string& msg) {
  _Condition(str.empty(), msg);
}

void ErrChk::fileExists(const std::string& filename, const std::string& msg) {
  std::ifstream file(filename.c_str());
  _Condition(!file, msg);
}

void ErrChk::_Condition(const bool condition, const std::string& msg) {
  if (condition) {
    throw std::invalid_argument(msg);
  }
}