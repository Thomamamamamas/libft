#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (0);
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] > str2[i])
				return (1);
			else
				return (-1);
		}
		i = i + 1;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	char	s1[] = "pute";
	char	s2[] = "putz";
	int	n = 6;
	printf("%d\n", memcmp(s1, s2, n));
	printf("%d\n", ft_memcmp(s1, s2, n));
	return (0);
}
*/
