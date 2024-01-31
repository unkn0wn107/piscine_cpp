/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:56:45 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 01:08:38 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

// Reads the entire content of the file with the given filename.
// Throws std::runtime_error if the file cannot be opened.
std::string File::readContent(const std::string& filename) {
  ErrChk::emptyString(filename, "Filename cannot be empty.");

  std::ifstream file;
  _openInputFileStream(filename.c_str(), file);

  std::stringstream buffer;
  buffer << file.rdbuf();
  std::string outContent = buffer.str();

  file.close();

  return outContent;
}

// Writes the given content to a file with the given filename.
// Throws std::runtime_error if the file cannot be created or opened for
// writing.
void File::writeContent(const std::string& filename, const std::string& str) {
  ErrChk::emptyString(filename, "Filename cannot be empty.");

  std::ofstream file;
  _openOutputFileStream(filename.c_str(), file);

  file << str;

  file.close();
}

// Utility function to open a file for reading and return an input file stream.
// Throws std::runtime_error if the file cannot be opened.
void File::_openInputFileStream(const char* filename, std::ifstream& file) {
  file.open(filename);
  if (!file.is_open()) {
    throw std::runtime_error("Unable to open file: " + std::string(filename));
  }
}

// Utility function to open a file for writing and return an output file stream.
// Throws std::runtime_error if the file cannot be created or opened for
// writing.
void File::_openOutputFileStream(const char* filename, std::ofstream& file) {
  file.open(filename);
  if (!file.is_open()) {
    throw std::runtime_error("Unable to open file: " + std::string(filename));
  }
}