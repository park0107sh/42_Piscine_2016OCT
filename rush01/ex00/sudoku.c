/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 16:47:07 by sopark            #+#    #+#             */
/*   Updated: 2016/11/06 22:28:49 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
int		validate(int **numbers, int row, int col, int value);

int		sudoku_solver(int **numbers, int value)
{
	int i;
	int x;
	int y;

	i = 1;
	x = value / 9;
	y = value % 9;
	if (value == 81)
		return (1);
	if (value == 81 && (!validate(numbers, x, y, i)))
		return (0);
	if (numbers[x][y] != 0)
		return (sudoku_solver(numbers, value + 1));
	while (i < 10)
	{
		if (validate(numbers, x, y, i))
		{
			numbers[x][y] = i;
			if (sudoku_solver(numbers, value + 1))
				return (1);
			else
				numbers[x][y] = 0;
		}
		i++;
	}
	return (0);
}

void	print_out_sudocode(int **numbers)
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			if (numbers[x][y] == 0)
				write(1, "No Sudo Answer\n", 17);
			else
				ft_putchar(numbers[x][y] + '0');
			if (y != 8)
				ft_putchar(' ');
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

int		**fill_numbers(char **argv)
{
	int x;
	int y;
	int **numbers;

	x = 0;
	numbers = (int **)malloc(sizeof(int *) * 9);
	while (x < 9)
	{
		if (ft_strlen(argv[x]) != 9)
			return (NULL);
		numbers[x] = (int *)malloc(sizeof(int) * 9);
		y = 0;
		while (y < 9)
		{
			if (!((argv[x][y] >= 49 && argv[x][y] <= 57) || (argv[x][y] == 46)))
				return (NULL);
			if (argv[x][y] == '.')
				numbers[x][y] = 0;
			else
				numbers[x][y] = argv[x][y] - '0';
			y++;
		}
		x++;
	}
	return (numbers);
}

int		reverse_sudo(int **numbers, int value)
{
	int i;
	int x;
	int y;

	i = 1;
	x = value / 9;
	y = value % 9;
	if (value == -1)
		return (1);
	if (numbers[x][y] != 0)
		return (reverse_sudo(numbers, value - 1));
	while (i < 10)
	{
		if (validate(numbers, x, y, i))
		{
			numbers[x][y] = i;
			if (reverse_sudo(numbers, value - 1))
				return (1);
			else
				numbers[x][y] = 0;
		}
		i++;
	}
	return (0);
}


int		main(int argc, char **argv)
{
	int **numbers;
	int **numbers_2;

	if (argc == 10)
	{
		numbers = fill_numbers(&argv[1]);
		numbers_2 = fill_numbers(&argv[1]);
		if (numbers == NULL)
			write(1, "Error\n", 6);
		else if (sudoku_solver(numbers, 0))
		{
			if (reverse_sudo(numbers_2, 80))
			{
				if (numbers != numbers_2)
					write(1, "Error\n", 6);
			}
			else
				print_out_sudocode(numbers);
		}
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
