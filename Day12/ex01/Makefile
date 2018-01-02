# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sopark <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/10 13:38:17 by sopark            #+#    #+#              #
#    Updated: 2016/11/10 17:47:07 by sopark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_cat

CC		=	gcc
CFLAGS	=	-c -Wall -Werror -Wextra
OFLAGS	=	-o -Wall -Werror -Wextra

FILE	=	./main.c
OBJS	=	./main.o

all		:	$(NAME)

$(NAME)	:
	$(CC) $(CFLAGS) $(FILE)
	$(CC) $(OFLAGS) -o $(NAME) $(OBJS)

clean	:
	/bin/rm -f $(OBJS)

fclean	:	clean
	/bin/rm -f $(NAME)
