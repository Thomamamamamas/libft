/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:46:43 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/02 14:58:06 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	while ((i < len_src) && (src[i]))
	{
		dest[len_dest + i] = src[i];
		i = i + 1;
	}
	dest[len_dest + 1] = '\0';
	return (dest);
}

#include <stdio.h>

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
	printf("%s\n", ft_strcat(dest, src));
	return (0);
}
