/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <tcasale@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:36:25 by tcasale           #+#    #+#             */
/*   Updated: 2022/03/11 19:36:30 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_is_sort(int *tab, size_t lenght)
{
	size_t	n;

	if (lenght == 1)
		return (1);
	n = 0;
	while (n + 1 < lenght)
	{
		if (tab[n] > tab[n + 1])
			return (0);
		n++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main()
{
	int		tab[] = {1, 2, 0, 5};
	size_t	lenght = 4;
	printf("%d\n", ft_is_sort(tab, lenght));
	return (0);
}
*/
