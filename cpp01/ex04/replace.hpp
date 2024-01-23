/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                           :+:      :+:    :+:
 */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:03 by agaley            #+#    #+#             */
/*   Updated: 2024/01/13 00:57:03 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
#define MAIN_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

#include "error_handling.hpp"
#include "file_utils.hpp"
#include "string_utils.hpp"

class Replacer {
 private:
  std::string filename;
  std::string stringToReplace;
  std::string replacementString;
  std::string fileContent;
  void        _readFile();
  void        _replaceStrings();
  void        _writeFile();

 public:
  Replacer(char* argv[]);
  ~Replacer();

  int replace();
};

#endif