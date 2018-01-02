/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sopark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:04:59 by sopark            #+#    #+#             */
/*   Updated: 2016/11/11 01:01:18 by sopark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	int		nb_char;
	char	buf[4096 + 1];

	nb_char = 1;
	if (argc < 2)
		return (write(2, "File name missing.\n", 19) || 1);
	if (argc > 2)
		return (write(2, "Too many arguments.\n", 20) || 1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (write(2, "OPEN() error.\n", 14) || 1);
	while (nb_char)
	{
		nb_char = read(fd, buf, 4096);
		buf[4096] = '\0';
		write(1, buf, nb_char);
	}
	fd = close(fd);
	if (fd == -1)
		return (write(2, "CLOSE() error.\n", 15) || 1);
	return (0);
}
