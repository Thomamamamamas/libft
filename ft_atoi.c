/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:03:50 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/02 15:04:17 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *nptr)
{
	int	res;
	int	signe;
	int	n;

	n = 0;
	signe = 0;
	res = 0;
	while (nptr[n] == ' ' || nptr[n] == '\n' || nptr[n] == '\t')
		n++;
	if (nptr[n] == '-' || nptr[n] == '+')
	{
		if (nptr[n] == '-')
			signe = 1 - signe;
		n++;
	}
	while (nptr[n] >= 48 && nptr[n] <= 57)
	{
		res = res * 10 + nptr[n] - 48;
		n++;
	}
	if (signe == 1)
		res = res * -1;
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char n[] = "\n    +42222229";
	printf("%d\n", atoi(n));
	printf("%d\n", ft_atoi(n));
	return (0);
}
*/
