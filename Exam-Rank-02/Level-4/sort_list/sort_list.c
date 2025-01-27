#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *curent;
	void *tmp;

	if (!lst)
		return (lst);
	curent = lst;
	while (curent->next)
	{
		if (!cmp(*(int *)(curent->data), *(int *)(curent->next->data)))
		{
			tmp = curent->data;
			curent->data = curent->next->data;
			curent->next->data = tmp;
			curent = lst;
		}
		else
			curent = curent->next;
	}
	return (lst);
}
