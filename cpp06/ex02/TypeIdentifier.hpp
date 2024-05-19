/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeIdentifier.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:35:43 by agaley            #+#    #+#             */
/*   Updated: 2024/05/19 21:16:01 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEIDENTIFIER_H
#define TYPEIDENTIFIER_H

#include <cstdlib>
#include <iostream>
#include <typeinfo>
#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

class TypeIdentifier {
 public:
  static void identify(Base* p);
  static void identify(Base& p);
};

Base* generate();

#endif