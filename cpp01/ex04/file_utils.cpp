/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:56:45 by agaley            #+#    #+#             */
/*   Updated: 2024/01/13 03:32:53 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

// Reads the entire content of the file with the given filename.
// Throws std::runtime_error if the file cannot be opened.
std::string FileUtils::ReadFileContent(const std::string& filename) {
  ErrorHandling::CheckEmptyString(filename, "Filename cannot be empty.");

  std::ifstream file;
  _OpenInputFileStream(filename.c_str(), file);

  std::stringstream buffer;
  buffer << file.rdbuf();
  std::string outContent = buffer.str();

  file.close();

  return outContent;
}

// Writes the given content to a file with the given filename.
// Throws std::runtime_error if the file cannot be created or opened for
// writing.
void FileUtils::WriteFileContent(const std::string& filename,
                                 const std::string& content) {
  ErrorHandling::CheckEmptyString(filename, "Filename cannot be empty.");

  std::ofstream file;
  _OpenOutputFileStream(filename.c_str(), file);

  file << content;

  file.close();
}

// Utility function to open a file for reading and return an input file stream.
// Throws std::runtime_error if the file cannot be opened.
void FileUtils::_OpenInputFileStream(const char*    filename,
                                     std::ifstream& file) {
  file.open(filename);
  if (!file.is_open()) {
    throw std::runtime_error("Unable to open file: " + std::string(filename));
  }
}

// Utility function to open a file for writing and return an output file stream.
// Throws std::runtime_error if the file cannot be created or opened for
// writing.
void FileUtils::_OpenOutputFileStream(const char*    filename,
                                      std::ofstream& file) {
  file.open(filename);
  if (!file.is_open()) {
    throw std::runtime_error("Unable to open file: " + std::string(filename));
  }
}