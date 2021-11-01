#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	m;

	m = 0;
	while (m < n)
	{
		if (((unsigned const char *)s)[m] == (unsigned char)c)
			return ((void *)&((unsigned const char *)s)[m]);
		m++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main()
{
	char	s[] = "pute";
	int		c = 101;
	size_t	n = 4;
	ft_memchr(s, c, n);
	return (0);
}
*/
