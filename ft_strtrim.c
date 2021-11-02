/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:03:41 by tcasale           #+#    #+#             */
/*   Updated: 2021/10/20 14:40:23 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static size_t	ft_cst_strlen(const char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

static int	char_is_in_set(const char c, const char *set)
{
	int	n;

	n = 0;
	while (set[n])
	{
		if (set[n] == c)
			return (1);
		n++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	n;
	char	*str;

	start = 0;
	end = ft_cst_strlen(s1);
	while (s1[start] && char_is_in_set(s1[start], set) == 1)
		start++;
	while (end > start && char_is_in_set(s1[end - 1], set) == 1)
		end--;
	str = malloc(sizeof(char *) * end - start + 1);
	if (!str)
		return (NULL);
	n = 0;
	while (start < end)
	{
		str[n] = s1[start];
		n++;
		start++;
	}
	str[n] = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	s1[] = "1test2";
	char	set[] = "12";
	char	*str;

	str = ft_strtrim(s1, set);
	printf("%s\n", str);
	return (0);
}
*/
