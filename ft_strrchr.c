char	*ft_strrchr(char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		*s++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	char	s[] = "pupuputet";
	char *c = "e";
	printf("%s\n", strrchr(s, *c));
	printf("%s\n", ft_strrchr(s, *c));
	return (0);
}
