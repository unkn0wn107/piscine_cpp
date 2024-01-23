/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_utils.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:47:57 by agaley            #+#    #+#             */
/*   Updated: 2024/01/13 03:32:35 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_UTILS_H
#define FILE_UTILS_H

class FileUtils {
 public:
  static std::string ReadFileContent(const std::string& filename);
  static void        WriteFileContent(const std::string& filename,
                                      const std::string& content);

 private:
  static void _OpenInputFileStream(const char* filename, std::ifstream& file);
  static void _OpenOutputFileStream(const char* filename, std::ofstream& file);
};

#endif