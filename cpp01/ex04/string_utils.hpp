/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:19 by agaley            #+#    #+#             */
/*   Updated: 2024/01/23 17:54:51 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <vector>

class StringUtils {
 public:
  static void                ReplaceAll(std::string&       str,
                                        const std::string& from,
                                        const std::string& to);
  static std::vector<size_t> FindAllOccurrences(const std::string& str,
                                                const std::string& sub);
};

#endif
