int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*
#include <stdio.h>

int	main()
{
	printf("%c\n", ft_toupper(100));
	return (0);
}
*/
