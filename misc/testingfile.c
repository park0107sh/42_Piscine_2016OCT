/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testingfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:13:10 by sopark            #+#    #+#             */
/*   Updated: 2016/10/30 21:44:44 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr(int c);
int ft_putchar(char c);

int	main()
{

	int x;
	int y;
	
	x = 1;
	y = 2;

	x += 3; //The result should be 4
	y *= 2 + 3; // if it computes the right thing first, then 10, but if not, then 7
	
	ft_putnbr(x);
	ft_putchar('\n');
	ft_putnbr(y);
	ft_putchar('\n');
	
	if (8 == 8 + -(1/2))
		ft_putnbr(x);
	
	return (0);
}
// the result should be 4 and 10 or 7 after empty line.
