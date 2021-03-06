/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <tcasale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:37:05 by tcasale           #+#    #+#             */
/*   Updated: 2022/03/11 19:39:22 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putstr(char *str)
{
	size_t	n;
	int		len;

	n = 0;
	len = 0;
	while (str[n])
	{
		ft_putchar(str[n]);
		len++;
	}
	return (len);
}
