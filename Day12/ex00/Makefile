# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sopark <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 11:39:04 by sopark            #+#    #+#              #
#    Updated: 2016/11/13 03:01:09 by sopark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_display_file

CC		=	gcc
CFLAGS	=	-c -Wall -Werror -Wextra
OFLAGS	=   -o -Wall -Werror -Wextra

FILE	=	./main.c
OBJS	=	./main.o

all		:	$(NAME)

$(NAME) :
	$(CC) $(CFLAGS) $(FILE)
	$(CC) $(OFLAGS) -o $(NAME) $(OBJS)

clean	:
	/bin/rm -f $(OBJS)

fclean	:	clean
	/bin/rm -f $(NAME)
