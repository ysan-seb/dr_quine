# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysan-seb <ysan-seb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/17 07:19:36 by ysan-seb          #+#    #+#              #
#    Updated: 2018/12/09 15:31:23 by ysan-seb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_NAME = Colleen

G_NAME = Grace

S_NAME = Sully

C_SRC =		Colleen.s 

G_SRC =		Grace.s

S_SRC =		Sully.s 

C_OBJ = $(C_SRC:.s=.o)

G_OBJ = $(G_SRC:.s=.o)

S_OBJ = $(S_SRC:.s=.o)

CC = gcc

NASM = 

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

all	: $(C_NAME) $(G_NAME) $(S_NAME)

$(C_NAME):$(C_OBJ)
	$(CC) $(FLAGS) -o $(C_NAME) $(C_OBJ)

$(G_NAME):$(G_OBJ)
	$(CC) $(FLAGS) -o $(G_NAME) $(G_OBJ)

$(S_NAME):$(S_OBJ)
	$(CC) $(FLAGS) -o $(S_NAME) $(S_OBJ)

%.o: %.s
	nasm -g -f macho64 -o $@ $< 

clean	:
	$(RM) $(C_OBJ)
	$(RM) $(G_OBJ)
	$(RM) $(S_OBJ)

fclean: clean
	$(RM) $(C_NAME)
	$(RM) $(G_NAME)
	$(RM) $(S_NAME)

re	:	fclean
	make

.PHONY: all lib clean fclean re
