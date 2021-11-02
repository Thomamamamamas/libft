/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:31:52 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/02 14:32:15 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	m;
	unsigned char	*dest2;
	unsigned char	*src2;

	if (dest == NULL && src == NULL)
		return (NULL);
	m = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (m < n)
	{
		*((char *)dest2 + m) = *((char *)src2 + m);
		m++;
	}
	return (dest2);
}
/*
#include <stdio.h>

int	main()
{
	char	dest[] = "pute";
	const char	*src = "t";
	size_t	n = 4;
	ft_memcpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}
*/
