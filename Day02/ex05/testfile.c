
#include <unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int	ft_putchar(char c);

void	testfile(void)
{
	char i;

	i=48;
	while (i <= 57)
	{
		ft_putchar(i);
			ft_putchar(i++);
			ft_putchar(++i);
	i++;
	}
}

int main(void) {
	testfile();
}

