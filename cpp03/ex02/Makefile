# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 20:23:49 by eleotard          #+#    #+#              #
#    Updated: 2022/11/10 19:41:55 by eleotard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

SRCS =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \

OBJS = ${SRCS:%.cpp=%.o}
DEPS = ${SRCS:%.cpp=%.d}

CC = c++

RM = rm -rf

FLAGS = -g -Wall -Wextra -Werror -MMD -std=c++98

%.o: %.cpp
	${CC} ${FLAGS} -c $^ -o $@

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS} ${DEPS}

fclean: clean
	${RM} ${NAME}

re: fclean all

-include : $(DEPS)
.PHONY: re all clean fclean
