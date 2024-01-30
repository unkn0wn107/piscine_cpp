# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 00:01:07 by agaley            #+#    #+#              #
#    Updated: 2024/01/30 17:33:59 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME = zombie

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:%.cpp=%.o)

MAKEFLAGS += --no-print-directory
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

all:					${NAME}

${NAME}:				${OBJ}
		${CC} ${CFLAGS} ${OBJ} -o $@

%.o:			%.cpp
		$(CC) $(CFLAGS) -o $@ -c $<

static:					fclean
		csbuild -c make

clean:
		rm -f ${OBJ}
		find . -name "*.gch" -delete

fclean:					clean
		find . -name "${NAME}" -delete

re:						fclean all

.PHONY:	all clean fclean re
