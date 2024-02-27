/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 20:31:02 by agaley            #+#    #+#             */
/*   Updated: 2024/02/27 13:55:14 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain {
 private:
  std::string _ideas[100];
  void        _init();
  void        copyIdeas(const Brain& src);

 public:
  Brain();
  Brain(const Brain& src);
  Brain& operator=(const Brain& src);
  ~Brain();

  void        teachIdea(const std::string& idea);
  std::string getIdea(int index) const;
};

#endif