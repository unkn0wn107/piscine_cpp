# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 00:01:07 by agaley            #+#    #+#              #
#    Updated: 2024/01/12 18:15:11 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME = zombies

SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:%.cpp=%.o)

MAKEFLAGS += --no-print-directory
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++

all:					${NAME}

${NAME}:				${OBJ}
		${CC} ${CFLAGS} ${OBJ} -o $@

%.o:			%.cpp
		$(CC) $(CFLAGS) -o $@ -c $<

static:					fclean
		csbuild -c make

clean:
		find . -name "*.o" -delete
		find . -name "*.gch" -delete

fclean:					clean
		find . -name "${NAME}" -delete

re:						fclean all

.PHONY:	all clean fclean re