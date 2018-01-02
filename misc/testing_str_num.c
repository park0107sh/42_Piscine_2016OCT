#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(void)
{
	int x;
	int y;
	x = 1;
	y = 2;
	ft_putstr("rush-0");
	ft_putnbr(x);
	ft_putstr("] [");
	return (0);
}
