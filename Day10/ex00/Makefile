# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sopark <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 14:35:15 by sopark            #+#    #+#              #
#    Updated: 2016/11/13 03:21:57 by sopark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HDIR	=	includes
SRC		=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

NAME	=	libft.a
OBJS	=	ft_putchar.o ft_putstr.o ft_swap.o ft_strcmp.o ft_strlen.o 

CC		=	gcc
CFLAGS	=	-c -Wall -Werror -Wextra

all		:	$(NAME)

$(NAME) : 
	$(CC) $(CFLAGS) $(SRC) -I$(HDIR)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean	:
	/bin/rm -f *.o

fclean	:
	/bin/rm -f $(NAME)

re		:	fclean all
