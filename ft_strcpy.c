/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:38:39 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/02 14:45:34 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	len_src;

	i = 0;
	len_src = ft_strlen(src) + 1;
	while (i < len_src)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	*dest;
	char	*src;

	dest = malloc(sizeof(char) * 1);
	src = malloc(sizeof(char) * 5);
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
	printf("%s\n", ft_strcpy(dest, src));
}
*/
