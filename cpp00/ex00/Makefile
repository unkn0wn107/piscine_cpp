# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/07 00:01:07 by agaley            #+#    #+#              #
#    Updated: 2023/12/15 15:13:39 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp
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
		rm ${OBJ}
		find . -name "*.gch" -delete

fclean:					clean
		find . -name "${NAME}" -delete

re:						fclean all

.PHONY:	all clean fclean re
