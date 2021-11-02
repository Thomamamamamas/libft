/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:21:43 by tcasale           #+#    #+#             */
/*   Updated: 2021/10/20 16:28:49 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	ft_cst_strlen(const char	*str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

static char	*ft_strdup(const char *s)
{
	char	*res;
	int		len_s;
	int		i;

	len_s = ft_cst_strlen(s);
	res = malloc(sizeof(char) * len_s);
	i = 0;
	while (res != NULL && s[i])
	{
		res[i] = s[i];
		i = i + 1;
	}
	return (res);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		n;

	str = ft_strdup(s);
	if (!str)
		return (NULL);
	n = 0;
	while (str[n])
	{
		str[n] = (*f)(n, str[n]);
		n++;
	}
	return (str);
}
