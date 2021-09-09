#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	return NULL;
}

#include <stdio.h>

int	main()
{
	char dest[] = "pute";
	char src[] = "pote";
	size_t	n = 4;
	printf("%p\n", memmove(dest, src, n));
	return (0);
}

