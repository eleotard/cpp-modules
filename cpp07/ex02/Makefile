# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 16:38:13 by eleotard          #+#    #+#              #
#    Updated: 2022/12/03 18:06:30 by eleotard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

SRCS =	main.cpp \

OBJS =	${SRCS:%.cpp=%.o}

RM = rm -rf

FLAGS = -g3 -std=c++98 -Wall -Wextra -Werror

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