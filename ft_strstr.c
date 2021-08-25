char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*pt;

	i = 0;
	pt = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			pt = (char *)haystack + i;
			j = 0;
			while (haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return (pt);
				j++;
			}
			pt = 0;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	haystack[] = "pupupuputesalope";
	char	needle[] = "pute";
	printf("%s\n", strstr(haystack, needle));
	printf("%s\n", ft_strstr(haystack, needle));
	return (0);
}
*/
