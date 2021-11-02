/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:38:27 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/02 17:37:05 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*res;
	int		len_s;
	int		i;

	len_s = ft_strlen(s);
	res = malloc(sizeof(char) * len_s);
	i = 0;
	while (res != NULL && s[i])
	{
		res[i] = s[i];
		i = i + 1;
	}
	return (res);
}
/*
#include <stdio.h>


int	main()
{
	char	s[] = "pute";

	printf("%s\n", ft_strdup(s));
	return (0);
}
*/