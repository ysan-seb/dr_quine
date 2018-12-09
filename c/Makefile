# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysan-seb <ysan-seb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/17 07:19:36 by ysan-seb          #+#    #+#              #
#    Updated: 2018/12/09 15:24:14 by ysan-seb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_NAME = _Colleen/Colleen

G_NAME = _Grace/Grace

S_NAME = _Sully/Sully

C_SRC =		Colleen.c 

G_SRC =		Grace.c 

S_SRC =		Sully.c 

C_OBJ = $(C_SRC:.c=.o)

G_OBJ = $(G_SRC:.c=.o)

S_OBJ = $(S_SRC:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = rm -rf

all	: $(C_NAME) $(G_NAME) $(S_NAME)

$(C_NAME):$(C_OBJ)
	$(CC) $(FLAGS) -o $(C_NAME) $(C_OBJ)

$(G_NAME):$(G_OBJ)
	$(CC) $(FLAGS) -o $(G_NAME) $(G_OBJ)

$(S_NAME):$(S_OBJ)
	$(CC) $(FLAGS) -o $(S_NAME) $(S_OBJ)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c  $<

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
