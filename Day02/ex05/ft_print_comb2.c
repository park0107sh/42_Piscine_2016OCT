/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 19:19:21 by sopark            #+#    #+#             */
/*   Updated: 2016/10/28 14:05:38 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	char ring[4];

	ring[3] = 1;
	while (!((ring[0] == 9) && (ring[1] == 9)))
	{
		ft_putchar(ring[0] + 48);
		ft_putchar(ring[1] + 48);
		ft_putchar(' ');
		ft_putchar(ring[2] + 48);
		ft_putchar(++ring[3] + 47);
		if (!((ring[0] == 9) && (ring[1] == 8)))
			ft_putchar(',');
		if (!((ring[0] == 9) && (ring[1] == 8)))
			ft_putchar(' ');
		if ((ring[3] = ring[3] % 10) == 0)
			ring[2]++;
		if (ring[2] == 10)
		{
			ring[2] = ring[0];
			ring[1]++;
			if ((ring[1] = ring[1] % 10) == 0)
				ring[0]++;
			ring[3] = ring[1] + 1;
		}
	}
}
