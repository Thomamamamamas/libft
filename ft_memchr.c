#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			return ((void *)&str[i]);
		i = i + 1;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main()
{
	const char str[] = "pute";
	int	c;
	size_t	n;

	c = 'a';
	n = 4;
	printf("%p\n", memchr(str, c , n));
	printf("%p\n", ft_memchr(str, c, n));
	return (0);
}
*/
