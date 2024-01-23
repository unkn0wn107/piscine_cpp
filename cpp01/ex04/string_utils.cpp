/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:15 by agaley            #+#    #+#             */
/*   Updated: 2024/01/23 17:54:47 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

// Replaces all occurrences of 'from' with 'to' in the given string 'str'.
void StringUtils::ReplaceAll(std::string&       str,
                             const std::string& from,
                             const std::string& to) {
  if (from.empty()) {
    return;
  }

  size_t startPos = 0;
  while ((startPos = str.find(from, startPos)) != std::string::npos) {
    str.replace(startPos, from.length(), to);
    startPos += from.length();
  }
}

// Finds all occurrences of 'sub' in 'str' and returns the starting indices of
// each occurrence.
std::vector<size_t> StringUtils::FindAllOccurrences(const std::string& str,
                                                    const std::string& sub) {
  std::vector<size_t> occurrences;
  size_t              startPos = 0;

  while ((startPos = str.find(sub, startPos)) != std::string::npos) {
    occurrences.push_back(startPos);
    startPos += sub.length();
  }

  return occurrences;
}