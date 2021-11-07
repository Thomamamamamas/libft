#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	m;

	m = 0;
	while (m < n)
	{
		*((unsigned char *)s + m) = (unsigned char)c;
		m++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main()
{
	char	s[] = "pute";
	int		c = 1;
	size_t	n = 4;
	printf("Avant memset s = %s\n", s);
	ft_memset(s, c, n);
	printf("Après memset s = %s\n", s);
	return (0);
}
*/
