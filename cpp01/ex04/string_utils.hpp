/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:19 by agaley            #+#    #+#             */
/*   Updated: 2024/01/30 17:23:19 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_UTILS_H
#define STRING_UTILS_H

class StringUtils {
 public:
  static void                ReplaceAll(std::string&       str,
                                        const std::string& from,
                                        const std::string& to);
};

#endif
