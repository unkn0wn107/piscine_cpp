/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 20:03:51 by agaley            #+#    #+#             */
/*   Updated: 2024/05/19 20:27:10 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main() {
  Data originalData(42, 3.14159, 'x');

  uintptr_t serializedPtr = Serializer::serialize(&originalData);
  std::cout << "Serialized Data: " << serializedPtr << std::endl;

  Data* deserializedData = Serializer::deserialize(serializedPtr);
  std::cout << "Deserialized Data - int: " << deserializedData->intValue
            << ", double: " << deserializedData->doubleValue
            << ", char: " << deserializedData->charValue << std::endl;

  bool isSame = (deserializedData->intValue == originalData.intValue) &&
                (deserializedData->doubleValue == originalData.doubleValue) &&
                (deserializedData->charValue == originalData.charValue);

  std::cout << "Data integrity check: " << (isSame ? "OK" : "KO")
            << std::endl;

  return 0;
}