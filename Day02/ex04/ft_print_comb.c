/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:06:18 by sopark            #+#    #+#             */
/*   Updated: 2016/10/28 13:56:46 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int ring[3];

	ring[0] = 48;
	while (ring[0] < 58)
	{
		ring[1] = ring[0] + 1;
		while (ring[1] < 58)
		{
			ring[2] = ring[1] + 1;
			while (ring[2] < 58)
			{
				ft_putchar(ring[0]);
				ft_putchar(ring[1]);
				ft_putchar(ring[2]);
				if (!(ring[0] == 55 && ring[1] == 56 && ring[2] == 57))
				{
					ft_putchar('.');
					ft_putchar(' ');
				}
				ring[2]++;
			}
			ring[1]++;
		}
		ring[0]++;
	}
}
