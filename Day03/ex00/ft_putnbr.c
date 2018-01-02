/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 21:58:56 by sopark            #+#    #+#             */
/*   Updated: 2016/10/28 16:58:47 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int i);

void	ft_putnbr(int nb)
{
	int long nc;

	nc = nb;
	if (nc < 0)
	{
		ft_putchar('-');
		nc = (nc * -1);
	}
	if (nc >= 10)
	{
		ft_putnbr(nc / 10);
		ft_putchar((nc % 10) + 48);
	}
	else if (nc >= 0 && nc <= 10)
	{
		ft_putchar(nc + 48);
	}
}
