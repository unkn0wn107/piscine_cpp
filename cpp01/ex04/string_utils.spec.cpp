/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.spec.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:23 by agaley            #+#    #+#             */
/*   Updated: 2024/01/23 17:55:15 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

void TestReplaceAll() {
  std::string testStr = "Hello World! World is big.";
  std::string from = "World";
  std::string to = "Universe";
  StringUtils::ReplaceAll(testStr, from, to);
  assert(testStr == "Hello Universe! Universe is big.");
  std::cout << "OK : TestReplaceAll." << std::endl;

  testStr = "Hello World! World is big.";
  from = "";
  StringUtils::ReplaceAll(testStr, from, to);
  assert(testStr == "Hello World! World is big.");
  std::cout << "OK : TestReplaceAll with empty 'from' string." << std::endl;
}

void TestFindAllOccurrences() {
  std::string         testStr = "Hello World! World is big. Hello again.";
  std::string         sub = "Hello";
  std::vector<size_t> occurrences =
      StringUtils::FindAllOccurrences(testStr, sub);
  assert(occurrences.size() == 2 && occurrences[0] == 0 &&
         occurrences[1] == 27);
  std::cout << "OK : TestFindAllOccurrences." << std::endl;
}
