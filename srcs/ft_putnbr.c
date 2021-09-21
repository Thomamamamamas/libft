#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		n = -nb;
		ft_putchar('-');
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar(n + '0');
}
/*
int	main()
{
	ft_putnbr(-42);
	return (0);
}
*/
