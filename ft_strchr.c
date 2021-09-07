char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i = i + 1;
	}
	if (c != '\0')
		return (0);
	return ((char *)s + i);
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
