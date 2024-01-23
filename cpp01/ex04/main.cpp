/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:56:58 by agaley            #+#    #+#             */
/*   Updated: 2024/01/13 03:21:26 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cerr << "Incorrect number of arguments provided." << std::endl;
    std::cerr << "Usage: replace <filename> <string_to_replace> "
              << "<replacement_string>" << std::endl;
    std::cerr << "<filename>: The name of the file to be processed."
              << std::endl;
    std::cerr << "<string_to_replace>: The string to be replaced in the file."
              << std::endl;
    std::cerr << "<replacement_string>: The string to replace the original "
                 "string with."
              << std::endl;
    return 1;
  }

  Replacer replacer(argv);
  return replacer.replace();
}