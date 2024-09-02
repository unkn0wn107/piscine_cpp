# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 15:51:13 by agaley            #+#    #+#              #
#    Updated: 2024/09/02 01:12:54 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -MMD -std=c++98
SRC = main.cpp PmergeMe.cpp
OBJ = $(SRC:%.cpp=%.o)
DEPS = $(SRC:%.cpp=%.d)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	rm -f $(OBJ)
	rm -f $(DEPS)
	find . -type f -name "*_shrubbery" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re