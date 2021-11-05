/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:05:08 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/05 13:05:09 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	n;

	str = ft_strdup(s);
	if (!str || !s || !f)
		return (NULL);
	n = 0;
	while (str[n])
	{
		str[n] = (*f)(n, str[n]);
		n++;
	}
	return (str);
}
