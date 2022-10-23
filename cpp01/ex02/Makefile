# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elsie <elsie@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/23 17:34:50 by elsie             #+#    #+#              #
#    Updated: 2022/10/23 17:45:46 by elsie            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ex02

SRCS =	main.cpp \

OBJS =	${SRCS:%.cpp=%.o}

RM = rm -rf

FLAGS = -g -Wall -Wextra -std=c++98 #-Werror

CC = c++

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re