# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elsie <elsie@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 20:21:12 by eleotard          #+#    #+#              #
#    Updated: 2022/10/23 16:43:17 by elsie            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRCS =	main.cpp \
		newZombie.cpp \
		randomChump.cpp \
		Zombie.cpp \

OBJS = ${SRCS:%.cpp=%.o}

CC = c++

RM = rm -rf

FLAGS = -g -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	${CC} ${FLAGS} -c $^ -o $@

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: re all clean fclean


	