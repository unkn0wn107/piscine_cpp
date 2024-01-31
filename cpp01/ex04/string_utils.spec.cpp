/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.spec.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:23 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 01:15:08 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

void TestReplaceAll() {
  std::string testStr = "Hello World! World is big.";
  std::string from = "World";
  std::string to = "Universe";
  StringUtils::replaceAll(testStr, from, to);
  assert(testStr == "Hello Universe! Universe is big.");
  std::cout << "OK : TestreplaceAll." << std::endl;

  testStr = "Hello World! World is big.";
  from = "";
  StringUtils::replaceAll(testStr, from, to);
  assert(testStr == "Hello World! World is big.");
  std::cout << "OK : TestreplaceAll with empty 'from' string." << std::endl;

  testStr = "aa";
  from = "a";
  to = "aa";
  StringUtils::replaceAll(testStr, from, to);
  assert(testStr == "aaaa");
  std::cout << "OK : TestreplaceAll with duplicate." << std::endl;
}
