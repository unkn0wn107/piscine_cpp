/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:32:56 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 01:29:12 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl {
 private:
  void debug(void) const;
  void info(void) const;
  void warning(void) const;
  void error(void) const;

 public:
  Harl();
  ~Harl();

  void complain(const std::string level) const;
};

#endif