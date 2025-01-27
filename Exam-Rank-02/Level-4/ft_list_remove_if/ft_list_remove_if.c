#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;
	t_list *prev;
	t_list *temp;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		temp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(temp);
	}

	current = *begin_list;
	prev = NULL;

	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			temp = current;
			if (prev)
				prev->next = current->next;
			current = current->next;
			free(temp);
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}
