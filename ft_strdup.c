#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strdup(char *s)
{
	char	*res;
	int		len_s;
	int		i;

	len_s = ft_strlen(s);
	res = malloc(sizeof(char) * len_s);
	i = 0;
	while (res != NULL && s[i])
	{
		res[i] = s[i];
		i = i + 1;
	}
	return (res);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	s[] = "pute";

	printf("%s\n", ft_strdup(s));
	return (0);
}
*/
