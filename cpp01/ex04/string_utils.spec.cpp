/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.spec.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:23 by agaley            #+#    #+#             */
/*   Updated: 2024/01/30 17:27:20 by agaley           ###   ########lyon.fr   */
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

  testStr = "aa";
  from = "a";
  to = "aa";
  StringUtils::ReplaceAll(testStr, from, to);
  assert(testStr == "aaaa");
  std::cout << "OK : TestReplaceAll with duplicate." << std::endl;
}
