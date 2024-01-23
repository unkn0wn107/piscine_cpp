/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:56:32 by agaley            #+#    #+#             */
/*   Updated: 2024/01/23 17:50:57 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void ErrorHandling::CheckEmptyString(const std::string& str,
                                     const std::string& errorMessage) {
  _CheckCondition(str.empty(), errorMessage);
}

void ErrorHandling::CheckFileExists(const std::string& filename,
                                    const std::string& errorMessage) {
  std::ifstream file(filename.c_str());
  _CheckCondition(!file, errorMessage);
}

void ErrorHandling::_CheckCondition(bool               condition,
                                    const std::string& errorMessage) {
  if (condition) {
    throw std::invalid_argument(errorMessage);
  }
}