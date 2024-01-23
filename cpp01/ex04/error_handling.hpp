/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:56:36 by agaley            #+#    #+#             */
/*   Updated: 2024/01/23 17:51:17 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_HANDLING_H
#define ERROR_HANDLING_H

class ErrorHandling {
 public:
  static void CheckEmptyString(const std::string& str,
                               const std::string& errorMessage);
  static void CheckFileExists(const std::string& filename,
                              const std::string& errorMessage);

 private:
  static void _CheckCondition(bool condition, const std::string& errorMessage);
};

#endif