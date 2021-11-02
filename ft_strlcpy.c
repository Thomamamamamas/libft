/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:10:49 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/02 17:34:38 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	temp;
	size_t	n;

	temp = 0;
	while (src[temp] && temp < size)
	{
		dest[temp] = src[temp];
		temp++;
	}
	n = temp;
	while (n < size)
	{
		dest[n] = '\0';
		n++;
	}
	return (temp);
}
/*
#include <stdio.h>

int	main()
{
	char	*dest;
	char	*src;
	size_t	size;

	size = 7;
	dest = malloc(sizeof(char) * size);
	src = malloc(sizeof(char) * 5);
	dest[0] = 'p';
	dest[1] = 'u';
	src[0] = 's';
	src[1] = 'u';
	src[2] = 'c';
	src[3] = 'e';
	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	return (0);
}
*/
