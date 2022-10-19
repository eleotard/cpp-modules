# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 20:21:12 by eleotard          #+#    #+#              #
#    Updated: 2022/10/19 20:27:22 by eleotard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRCS = main.cpp \

OBJS = ${SRCS:%.cpp=%.o}

CC = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	${CC} -c $^ -o $@

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

.PHONY: re all clean fclean


	