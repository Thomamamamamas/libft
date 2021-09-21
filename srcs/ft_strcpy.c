int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	len_src;

	i = 0;
	len_src = ft_strlen(src) + 1;
	while (i < len_src)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	*dest;
	char	*src;

	dest = malloc(sizeof(char) * 1);
	src = malloc(sizeof(char) * 5);
	dest[0] = 'p';
	dest[1] = 'u';
	dest[2] = 't';
	dest[3] = 'e';
	src[0] = 's';
	src[1] = 'a';
	src[2] = 'l';
	src[3] = 'o';
	src[4] = 'p';
	src[5] = 'e';
	printf("%s\n", ft_strcpy(dest, src));
}
*/
