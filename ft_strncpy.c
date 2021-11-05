/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:43:43 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/05 11:47:34 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	while (i < n)
	{
		dest[i] = '\0';
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
	size_t	n;

	dest = malloc(sizeof(char) * 1);
	src = malloc(sizeof(char) * 5);
	n = 2; 
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
	printf("%s\n", ft_strncpy(dest, src, n));
}
*/
