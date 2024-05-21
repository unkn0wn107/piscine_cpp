/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:26:31 by agaley            #+#    #+#             */
/*   Updated: 2024/05/20 22:34:09 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

template <typename T, typename F>
void iter(T* array, unsigned int length, F function) {
  for (unsigned int i = 0; i < length; ++i) {
    function(array[i]);
  }
}

template <typename T>
void printElement(T& element) {
  std::cout << element << std::endl;
}

#endif