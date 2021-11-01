#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	m;
	unsigned char	*dest2;
	unsigned char	*src2;

	if (dest == NULL && src == NULL)
		return (NULL);
	m = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (dest < src)
	{
		while (m < n)
		{
			*((char *)dest2 + m) = *((char *)src2 + m);
			m++;
		}
	}
	else
		while (n--)
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char		dest[] = "pute";
	const char	src[] = "sale";
	size_t		n = 4;
	printf("%s\n", dest);
	ft_memmove(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
*/
