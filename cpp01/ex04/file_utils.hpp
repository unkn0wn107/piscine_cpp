/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:47:57 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 01:08:40 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_UTILS_H
#define FILE_UTILS_H

class File {
 public:
  static std::string readContent(const std::string& filename);
  static void writeContent(const std::string& filename, const std::string& str);

 private:
  static void _openInputFileStream(const char* filename, std::ifstream& file);
  static void _openOutputFileStream(const char* filename, std::ofstream& file);
};

#endif