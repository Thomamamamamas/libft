int	ft_strlen(char *s)
{
	int	n;

	n = 0;
	while (s[n])
		n = n + 1;
	return (n);
}
