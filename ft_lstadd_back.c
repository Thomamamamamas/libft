/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcasale <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:52:49 by tcasale           #+#    #+#             */
/*   Updated: 2021/11/02 16:15:01 by tcasale          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*back;

	back = (t_list *)malloc(sizeof(t_list));
	back = ft_lstlast(*alst);
	back->next = new;
	new->next = NULL;
}
/*
#include <stdio.h>

int	main()
{
	t_list	*un;
	t_list	*deux;
	t_list	*trois;
	t_list	*quatre;
	t_list	*new;
	t_list	*last;

	un = (t_list *)malloc(sizeof(t_list));
	deux = (t_list *)malloc(sizeof(t_list));
	trois = (t_list *)malloc(sizeof(t_list));
	quatre = (t_list *)malloc(sizeof(t_list));
	new = (t_list *)malloc(sizeof(t_list));
	last = (t_list *)malloc(sizeof(t_list));
	un->next = deux;
	deux->next = trois;
	trois->next = quatre;
	quatre->next = NULL;
	quatre->content = "nul";
	new->content = "pute";
	ft_lstadd_back(&un, new);
	last = ft_lstlast(un);
	printf("%s\n", last->content);
	return (0);
}
*/
