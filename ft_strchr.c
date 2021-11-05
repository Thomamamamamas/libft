/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:26:15 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/05 11:33:00 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char	s[] = "pupuputet";
	char	*c = "e";
	printf("%s\n", strchr(s, *c));
	printf("%s\n", ft_strchr(s, *c));
	return (0);
}
*/
