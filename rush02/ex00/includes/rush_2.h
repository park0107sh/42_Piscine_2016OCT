/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 23:16:04 by sopark            #+#    #+#             */
/*   Updated: 2016/11/13 03:18:54 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_2_H
# define RUSH_2_H
# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		x_dim(char *str);
int		y_dim(char *str);
int		which_rush_single(char *str);
int		which_rush(char *str);
int		rush234test(char *str);
void	ft_putnbr(int nb);
#endif
