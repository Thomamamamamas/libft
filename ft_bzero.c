#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	m;

	m = 0;
	while (m < n)
	{
		*((char *)s + m) = '\0';
		m = m + 1;
	}
}
/*
#include <stdio.h>
int	main()
{
	char	s[] = "pute";
	size_t	n = 5;
	ft_bzero(s, n);
	return (0);
}
*/
