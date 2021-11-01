#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	n;

	n = 0;
	while(s[n])
	{
		ft_putchar_fd(s[n], fd);
		n++;
	}
}
/*
int	main()
{
	ft_putstr_fd("bonjour pute", 1);
	return(0);
}
*/
