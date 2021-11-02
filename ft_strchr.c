/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:59:37 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/02 14:59:39 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i = i + 1;
	}
	if (c != '\0')
		return (0);
	return ((char *)s + i);
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
