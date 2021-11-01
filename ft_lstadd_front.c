#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
/*
int	main()
{
	t_list	*first;
	t_list	*new;
	first = (t_list *)malloc(sizeof(t_list));
	new = (t_list *)malloc(sizeof(t_list));
	ft_lstadd_front(&first, new);
	return (0);
}
*/
