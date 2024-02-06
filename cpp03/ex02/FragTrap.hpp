/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:02 by agaley            #+#    #+#             */
/*   Updated: 2024/02/06 01:15:52 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 private:
  void _initStats();

 public:
  FragTrap();
  FragTrap(const std::string& name);
  FragTrap(const FragTrap& src);
  FragTrap& operator=(const FragTrap& rhs);
  ~FragTrap();

  void highFivesGuys(void);
};

#endif