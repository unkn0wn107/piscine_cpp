/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.spec.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:56:54 by agaley            #+#    #+#             */
/*   Updated: 2024/01/23 18:07:24 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

void TestWriteFileContent() {
  std::string filename = "test_input.txt";
  std::string content = "File with old to be replaced by old target keyword";
  FileUtils::WriteFileContent(filename, content);
  std::string writtenContent = FileUtils::ReadFileContent(filename);
  assert(content == writtenContent);
  std::cout << "OK : TestWriteFileContent" << std::endl;
}

void TestReadFileContent() {
  std::string filename = "test_input.txt";
  std::string content = FileUtils::ReadFileContent(filename);
  assert(!content.empty());
  std::cout << "OK : TestReadFileContent" << std::endl;
}
