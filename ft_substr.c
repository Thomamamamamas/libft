/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:06:00 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/05 16:08:22 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	size_t			len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		str = malloc(0);
		*str = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (len_s - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i + start] && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char			s[] = "salut bande de putes";
	char			*str;
	unsigned int	start = 6;
	size_t			len = 10;

	str = ft_substr(s, start, len);
	printf("%s\n", str);
	return (0);
}
*/
