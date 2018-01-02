void	ft_putchar(char nbr);
void	ft_putnbr(int nbr);
void	ft_ft(int *nbr);

int		main(void)
{
	int a;
	int *nbr;

	a = 1111;
	nbr = &a;

	ft_ft(nbr);
	ft_putnbr(*nbr);

	return(0);
}

