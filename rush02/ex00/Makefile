# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sopark <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 17:02:45 by sopark            #+#    #+#              #
#    Updated: 2016/11/13 20:17:06 by sopark           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HDIR	=	includes
HELPF	=	helper_functions/ft_putchar.c helper_functions/ft_putstr.c helper_functions/x_dim.c helper_functions/y_dim.c helper_functions/which_rush_single.c helper_functions/which_rush.c helper_functions/rush234test.c helper_functions/ft_putnbr.c

NAME	=	libft.a
OBJS	=	ft_putchar.o ft_putstr.o ft_putstr.o x_dim.o y_dim.o which_rush_single.o which_rush.o rush234test.o ft_putnbr.o

CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror

FILE	=	./main.c

all		:	$(NAME)

$(NAME)	:
		@$(CC) -o rush-00 $(FLAGS) rushes/rush00.c
		@$(CC) -o rush-01 $(FLAGS) rushes/rush01.c
		@$(CC) -o rush-02 $(FLAGS) rushes/rush02.c
		@$(CC) -o rush-03 $(FLAGS) rushes/rush03.c
		@$(CC) -o rush-04 $(FLAGS) rushes/rush04.c
		@$(CC) -c $(FLAGS) $(HELPF) -I$(HDIR)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)
		@$(CC) -o rush-2 $(FLAGS) $(FILE) $(HELPF) -I$(HDIR)

clean	:
		@/bin/rm -f $(OBJS)

fclean	: clean
		@/bin/rm -f $(NAME) rush-2 rush-00 rush-01 rush-02 rush-03 rush-04

re		:	fclean all
