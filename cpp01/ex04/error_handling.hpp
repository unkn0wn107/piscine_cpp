/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:56:36 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 01:09:16 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_HANDLING_H
#define ERROR_HANDLING_H

class ErrChk {
 public:
  static void emptyString(const std::string& str, const std::string& msg);
  static void fileExists(const std::string& filename, const std::string& msg);

 private:
  static void _Condition(const bool condition, const std::string& msg);
};

#endif