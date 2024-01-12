/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:33:34 by agaley            #+#    #+#             */
/*   Updated: 2023/12/15 15:17:58 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  int i;
  int j;

  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  i = 1;
  while (i < argc) {
    j = 0;
    while (argv[i][j]) {
      std::cout << (char)toupper(argv[i][j]);
      j++;
    }
    i++;
  }
  std::cout << std::endl;
  return (0);
}