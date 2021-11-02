/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:16:31 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/02 17:09:00 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*del(void *elt)
{
	elt = "";
}

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	(del) (lst->content);
	lst->next = NULL;
	free(lst);
}

#include <stdio.h>

int	main()
{
	t_list	*un;

	un = (t_list *)malloc(sizeof(t_list));
	un->content = "pute";
	ft_lstdelone(un, (*del)(un->next));
	printf("%s\n", un->content);
	return (0);
}
