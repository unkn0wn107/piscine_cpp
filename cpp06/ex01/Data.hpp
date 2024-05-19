/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:57:09 by agaley            #+#    #+#             */
/*   Updated: 2024/05/19 19:59:25 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H

struct Data {
  int    intValue;
  double doubleValue;
  char   charValue;

  Data(int i, double d, char c) : intValue(i), doubleValue(d), charValue(c) {}
};

#endif