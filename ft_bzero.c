/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:30:57 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/02 14:31:01 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	m;

	m = 0;
	while (m < n)
	{
		*((char *)s + m) = '\0';
		m = m + 1;
	}
}
/*
#include <stdio.h>
int	main()
{
	char	s[] = "pute";
	size_t	n = 5;
	ft_bzero(s, n);
	return (0);
}
*/
