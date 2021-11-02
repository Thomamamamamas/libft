/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:06:00 by tcasale           #+#    #+#             */
/*   Updated: 2021/10/20 12:40:42 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;

	str = malloc(sizeof(char) * len + 1);
	i = 0;
	if (!str)
		return (NULL);
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
