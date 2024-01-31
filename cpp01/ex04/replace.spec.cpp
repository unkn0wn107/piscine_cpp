/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.spec.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:18 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 01:11:52 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

void TestReplaceFunction() {
  std::string filename;
  std::string stringToReplace;
  std::string replacementString;
  char*       args[4];
  std::string content;

  filename = "test_input.txt";
  stringToReplace = "old";
  replacementString = "new";

  args[0] = const_cast<char*>("program");
  args[1] = const_cast<char*>(filename.c_str());
  args[2] = const_cast<char*>(stringToReplace.c_str());
  args[3] = const_cast<char*>(replacementString.c_str());

  Replacer replacer(args);
  replacer.replace();

  content = File::readContent(filename + ".replace");
  assert(content.find(stringToReplace) == std::string::npos);
  assert(content.find(replacementString) != std::string::npos);

  if (content.find(replacementString) != std::string::npos) {
    std::cout << "OK : TestReplaceFunction passed" << std::endl;
  } else {
    std::cout << "ERROR : TestReplaceFunction failed" << std::endl;
  }
}

void TestReplaceFunctionFailing() {
  std::string filename;
  std::string stringToReplace;
  std::string replacementString;
  char*       args[4];
  std::string content;

  filename = "non_existent_file.txt";
  stringToReplace = "old";
  replacementString = "new";

  args[0] = const_cast<char*>("program");
  args[1] = const_cast<char*>(filename.c_str());
  args[2] = const_cast<char*>(stringToReplace.c_str());
  args[3] = const_cast<char*>(replacementString.c_str());

  Replacer replacer(args);
  replacer.replace();

  std::cout << "OK : TestReplaceFunctionFailing passed" << std::endl;
}