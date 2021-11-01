#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	unsigned int	i;
	void			*mem;

	i = 0;
	mem = malloc(size);
	if (!mem)
		return (NULL);
	while (i < size)
	{
		*((char *)mem + i) = 0;
		i++;
	}
	return (mem);
}
/*
#include <stdio.h>

int	main()
{
	size_t size;

	size = 4;
	ft_memalloc(size);
	return (0);
}
*/
