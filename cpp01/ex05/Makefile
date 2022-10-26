# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 16:48:13 by eleotard          #+#    #+#              #
#    Updated: 2022/10/26 19:56:55 by eleotard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ex05

SRCS =	main.cpp \
		Harl.cpp

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


	