/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 14:40:47 by sopark            #+#    #+#             */
/*   Updated: 2016/10/31 15:47:15 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_doorlock(int *i, int *wid_door, int empt, int len_door)
{
	int	dollar_key;

	dollar_key = len_door / 2;
	if ((len_door > 3) && (empt == dollar_key)
			&& (*wid_door == dollar_key - 1))
		ft_putchar('$');
	else
		ft_putchar('|');
	*i += 1;
	*wid_door += 1;
}

int		print_roof(int line_no, int empt, int len_door)
{
	int i;
	int wid_door;

	wid_door = -(len_door / 2);
	i = 0;
	while (i < empt)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	i = 0;
	while (i <= line_no * 2)
	{
		while ((i == line_no + wid_door) && (empt < len_door)
				&& (wid_door <= len_door / 2))
			print_doorlock(&i, &wid_door, empt, len_door);
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return (empt - 1);
}

void	pyramid(int empt, int jump_no, int line_jump, int len_door)
{
	int i;
	int j;
	int jump;

	i = 0;
	j = 1;
	jump = 4;
	while (empt + 1)
	{
		if (i == line_jump)
		{
			i += jump_no;
			empt -= jump_no;
			line_jump = i + jump;
			jump++;
			if (j == 2)
			{
				jump_no++;
				j = 0;
			}
			j++;
		}
		empt = print_roof(i, empt, len_door);
		i++;
	}
}

void	sastantua(int size)
{
	int	empt;
	int	i;
	int	j;

	i = 1;
	j = 0;
	empt = 0;
	if (size > 0)
	{
		while (i <= size)
		{
			empt += 6 + j;
			if (i > 1)
				j++;
			if ((i > 1) && (i % 2))
				j++;
			i++;
		}
		if (!(size % 2))
			size--;
		pyramid(empt - 4, 2, 3, size);
	}
}
