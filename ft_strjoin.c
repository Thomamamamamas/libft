/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:57:17 by tcasale           #+#    #+#             */
/*   Updated: 2021/10/20 13:00:29 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	ft_cst_strlen(const char *str)
{
	int		n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	n;
	size_t	m;
	char	*str;

	n = 0;
	m = 0;
	str = malloc(sizeof(char *) * ft_cst_strlen(s1) + ft_cst_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[m])
	{
		str[n] = s1[m];
		m++;
		n++;
	}
	m = 0;
	while (s2[m])
	{
		str[n] = s2[m];
		m++;
		n++;
	}
	str[n] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	s1[] = "bande de ";
	char	s2[] = "putes";
	char	*s;

	s = ft_strjoin(s1, s2);
	printf("%s\n", s);
	return (0);
}
*/
