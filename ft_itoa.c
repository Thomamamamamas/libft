/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:11:17 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/06 14:26:12 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	size_number(long long int n)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		n = n * -1;
		res++;
	}
	while (n >= 10)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

static char	*fill_char(char *str, long long int n, int size)
{
	int	neg;

	str[size + 1] = '\0';
	if (n < 0)
		neg = 1;
	else
		neg = 0;
	if (neg == 1)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (size >= neg)
	{
		str[size] = '0' + n % 10;
		n = n / 10;
		size--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long long int		lln;
	char				*str;
	int					size;
	int					neg;

	lln = n;
	neg = 0;
	size = size_number(lln);
	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	return (fill_char(str, lln, size));
}
/*
#include <stdio.h>

int	main()
{
	int	n;

	n = -4200;
	printf("%s\n", ft_itoa(n));
	return (0);
}
*/
