# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 21:22:18 by elsie             #+#    #+#              #
#    Updated: 2022/11/25 19:37:26 by eleotard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRCS =	Bureaucrat.cpp \
		Form.cpp \
		main.cpp \

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