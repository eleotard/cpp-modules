# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 16:38:13 by eleotard          #+#    #+#              #
#    Updated: 2022/12/08 19:59:25 by eleotard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

SRCS =	main.cpp \
		MutantStack.cpp 

OBJS =	${SRCS:%.cpp=%.o}

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98

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

.PHONY: all clean fclean re #signifie que cest pas associe a des fichiers