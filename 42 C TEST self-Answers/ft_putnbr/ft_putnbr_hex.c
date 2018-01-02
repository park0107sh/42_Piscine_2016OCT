/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:40:47 by sopark            #+#    #+#             */
/*   Updated: 2016/11/15 20:13:50 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int long nc;

	nc = nb;
	if (nc < 0)
	{	
		ft_putchar('-');
		nc = (-1)*nc;
	}
	if (nc >= 16)
	{
		ft_putnbr(nc / 16);
		ft_putchar(nc % 16 + 48);
	}
	if (nc >= 10 && nc < 16)
		ft_putchar(nc + 97);
	else if (nc >= 0 && nc < 10)
		ft_putchar(nc + 48);
}

