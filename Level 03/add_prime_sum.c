#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(char nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr - '0');
}

void	add_prime_sum(int nbr)
{
	int rev;
	int sum;

	sum = 0;
	rev = 0;
	while (nbr != 0)
	{
		rev = nbr % 10;
		sum = sum + rev;
		nbr = nbr / 10;
	}
	ft_putnbr(sum);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		add_prime_sum(av[1]);
	else
		ft_putchar('\n');
	return (0);
}
