/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:58:20 by sopark            #+#    #+#             */
/*   Updated: 2016/11/11 00:21:47 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	ft_stdin(void)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
		write(1, &buf, 1);
}

void	ft_error(char *a)
{
	ft_putstr_2("ft_cat: ");
	ft_putstr_2(a);
	ft_putstr_2(": No such file or directory\n");
}

int		ft_file(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-')
			ft_stdin();
		else
		{
			fd = open(argv[i], O_RDONLY);
			if (fd >= 0)
			{
				while (read(fd, &buf, 1) != 0)
					write(1, &buf, 1);
			}
			else
				ft_error(argv[i]);
			close(fd);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc < 2 || argv[1][0] == '-')
		ft_stdin();
	ft_file(argc, argv);
	return (0);
}
