#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n;

	n = 0;
	while(lst->next != NULL)
	{
		lst = lst->next;
		n++;
	}
	n++;
	return (n);
}

#include <stdio.h>
/*
int	main()
{
	t_list	*first;
	t_list	*deuz;
	t_list *tres;
	t_list *four;
	t_list *five;
	t_list *six;

	first = (t_list *) malloc(sizeof(t_list));
	deuz = (t_list *) malloc(sizeof(t_list));
	tres = (t_list *) malloc(sizeof(t_list));
	four = (t_list *) malloc(sizeof(t_list));
	five = (t_list *) malloc(sizeof(t_list));
	six = (t_list *) malloc(sizeof(t_list));
	first->next = deuz;
	deuz->next = tres;
	tres->next = four;
	four->next = five;
	five->next = six;
	six->next = NULL;
	printf("%d\n", ft_lstsize(first));
	return (0);
}
*/
