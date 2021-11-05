/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:58:55 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/05 13:25:38 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (!size || len_dest > size)
		return (len_src + size);
	while(dest[i])
		i++;
	while (src[j] && ((i + j) < size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (len_src + i);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int	main()
{
	char	*dest;
	char	*src;

	dest = malloc(sizeof (char) * 7);
	src = malloc(sizeof (char) * 8);
	dest[0] = 'p';
	dest[1] = 'u';
	dest[2] = 't';
	dest[3] = 'e';
	src[0] = 'p';
	src[1] = 'u';
	src[2] = 't';
	src[3] = 'a';
	src[4] = 's';
	src[5] = 's';
	src[6] = 'e';
	printf("%d\n", strlcat(dest, src, 5));
}
*/
