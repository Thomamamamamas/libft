int	ft_atoi(char *str)
{
	int	n;
	int	res;
	int	neg;

	n = 0;
	neg = 0;
	res = 0;
	while (str[n] == ' ' || str[n] == '\t' || str[n] == '\r' || str[n] == '\n')
		n++;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			neg = 1 - neg;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		res = res * 10 + (str[n] - 48);
		n++;
	}
	if (neg == 1)
		res = res * -1;
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	nb[] = "-+42a42";
	printf("%d\n", atoi(nb));
	printf("%d\n", ft_atoi(nb));
	return(0);
}
*/
