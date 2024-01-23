/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 00:57:31 by agaley            #+#    #+#             */
/*   Updated: 2024/01/23 17:55:21 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
#define TESTS_H

#include "replace.hpp"

#include <cassert>

void TestReplaceAll();
void TestFindAllOccurrences();
void TestReadFileContent();
void TestWriteFileContent();
void TestCheckEmptyString();
void TestCheckNonEmptyString();

void TestReplaceFunction();
void TestReplaceFunctionFailing();

#endif