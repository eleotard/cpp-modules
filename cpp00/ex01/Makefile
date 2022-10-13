# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 14:40:13 by eleotard          #+#    #+#              #
#    Updated: 2022/10/13 20:47:21 by eleotard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRCS =	ex01.cpp \
		PhoneBook.cpp \
		Contact.cpp \

OBJS = ${SRCS:%.cpp=%.o}

%.o: %.cpp
	${CC} ${FLAGS} -c $< -o $@ 

CC = c++

RM = rm -rf

FLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: re all fclean clean 