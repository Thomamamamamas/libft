int	ft_strcmp(char *s1, char *s2)
{
	int	n;

	n = 0;
	while (s1[n] == s2[n] && s1[n] && s2[n])
		n++;
	return (s1[n] - s2[n]);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char s1[] = "pute";
	char s2[] = "putesss";
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
*/
