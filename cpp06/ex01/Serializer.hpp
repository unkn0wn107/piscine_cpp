/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:54:38 by agaley            #+#    #+#             */
/*   Updated: 2024/05/19 20:03:58 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <stdint.h>
#include "Data.hpp"

class Serializer {
 public:
  static uintptr_t serialize(Data* ptr);
  static Data*     deserialize(uintptr_t raw);
};

#endif