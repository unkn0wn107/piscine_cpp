# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 00:57:10 by agaley            #+#    #+#              #
#    Updated: 2024/01/30 17:33:59 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

CC := c++
CFLAGS := -Wall -Wextra -std=c++98 -pipe
TEST_CFLAGS := -Wall -Wextra -std=c++98 -fprofile-arcs -ftest-coverage

MAIN_SRC := main.cpp
SRCS := replace.cpp string_utils.cpp file_utils.cpp error_handling.cpp
TEST_SRCS := replace.spec.cpp string_utils.spec.cpp file_utils.spec.cpp error_handling.spec.cpp
TEST_SRC := tests.cpp

MAIN_OBJS := $(MAIN_SRC:.cpp=.o)
OBJS := $(SRCS:.cpp=.o)
TEST_OBJS := $(TEST_SRCS:.cpp=.o)
TEST_OBJ := $(TEST_SRC:.cpp=.o)

HEADERS := string_utils.hpp file_utils.hpp error_handling.hpp replace.cpp tests.hpp

EXE := replace
TEST_EXE := test

all: $(EXE)

$(EXE): $(MAIN_OBJS) $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(TEST_EXE): $(TEST_OBJS) $(OBJS) $(TEST_OBJ)
	$(CC) $(TEST_CFLAGS) $^ -o $@

$(TEST_OBJS): %.o : %.cpp
	$(CC) $(TEST_CFLAGS) -c $< -o $@

$(TEST_OBJ): %.o : %.cpp
	$(CC) $(TEST_CFLAGS) -c $< -o $@

unit-test: $(TEST_EXE)
	./$(TEST_EXE)

coverage: unit-test
	gcov $(TEST_SRCS)

re: clean all

clean:
	rm -f $(MAIN_OBJS) $(OBJS) $(TEST_OBJS) $(TEST_OBJ) $(EXE) $(TEST_EXE)
	find -name "*.gcda" -delete
	find -name "*.gcno" -delete
	find -name "*.gcov" -delete

fclean:					clean
		find . -name "${NAME}" -delete
		rm -f test_input.txt
		rm -f test_input.txt.replace

.PHONY: all test clean coverage re