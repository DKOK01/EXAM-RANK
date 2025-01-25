#include "ft_list.h"
#include <unistd.h>

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	if (!begin_list)
		return (0);
	while (begin_list != NULL)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}
