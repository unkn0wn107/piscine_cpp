/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:27 by agaley            #+#    #+#             */
/*   Updated: 2024/01/23 17:59:23 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

int main() {
  TestReplaceAll();
  TestFindAllOccurrences();
  TestWriteFileContent();
  TestReadFileContent();
  TestCheckEmptyString();
  TestCheckNonEmptyString();
  // Main function
  TestReplaceFunction();
  TestReplaceFunctionFailing();

  return 0;
}