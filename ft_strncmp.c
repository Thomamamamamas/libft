/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:02:59 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/02 15:03:40 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	m;

	m = 0;
	while (s1[m] == s2[m] && m < n - 1 && s1[m] && s2[m])
		m++;
	return (s1[m] - s2[m]);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	s1[] = "putes";
	char	s2[] = "putez";
	int	n = 5;
	printf("%d\n", strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/