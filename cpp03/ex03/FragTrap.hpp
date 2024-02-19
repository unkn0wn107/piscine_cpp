/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:02 by agaley            #+#    #+#             */
/*   Updated: 2024/02/19 20:14:38 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 private:
  std::string  _className;
  void         _init(void);

 public:
  FragTrap();
  FragTrap(const std::string& name);
  FragTrap(const std::string& name, int hp, int ep, int ad);
  FragTrap(const FragTrap& src);
  FragTrap& operator=(const FragTrap& rhs);
  ~FragTrap();

  void highFivesGuys() const;
};

#endif