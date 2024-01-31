/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:15 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 01:10:33 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

// Replaces all occurrences of 'from' with 'to' in the given string 'str'.
void StringUtils::replaceAll(std::string&       str,
                             const std::string& from,
                             const std::string& to) {
  if (from.empty()) {
    return;
  }

  size_t startPos = 0;
  while ((startPos = str.find(from, startPos)) != std::string::npos) {
    str.replace(startPos, from.length(), to);
    startPos += to.length();
  }
}
