char	*ft_strchr(char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		*s++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	s[] = "pupuputet";
	char	*c = "e";
	printf("%s\n", strchr(s, *c));
	printf("%s\n", ft_strchr(s, *c));
	return (0);
}
*/
