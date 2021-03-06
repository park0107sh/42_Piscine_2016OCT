/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 21:55:40 by sopark            #+#    #+#             */
/*   Updated: 2016/11/15 20:45:22 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void    ft_putnbr(int n)
{
	int long m;

	m = n;
	if (m < 0)
    {
        ft_putchar('-');
        m = -m;
    }
    if (m > 9)
        ft_putnbr(m / 10);
    ft_putchar(48 + m % 10);
}
