/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:27 by agaley            #+#    #+#             */
/*   Updated: 2024/01/31 01:15:59 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

int main() {
  TestReplaceAll();
  TestWriteFileContent();
  TestReadFileContent();
  TestCheckEmptyString();
  TestCheckNonEmptyString();
  // Main function
  TestReplaceFunction();
  TestReplaceFunctionFailing();

  return 0;
}