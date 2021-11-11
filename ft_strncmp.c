/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:02:59 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/05 11:44:22 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	m;

	m = 0;
	if (n == 0 || !s1 || !s2)
		return (0);
	while ((char)s1[m] == (char)s2[m] && m < n - 1 && s1[m] && s2[m])
		m++;
	return ((unsigned char)s1[m] - (unsigned char)s2[m]);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char	s1[] = "putes";
	char	s2[] = "putez";
	size_t	n = 5;
	printf("%d\n", strncmp(s1, s2, n));
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/
