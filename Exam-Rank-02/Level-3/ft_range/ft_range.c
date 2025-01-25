#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int		i = 0;
	int	*array;
	int 	size;

	if (start <= end)
		size = (end - start) + 1;
	else
		size = (start - end) + 1;
	array = (int *)malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	while (i < size)
	{
		if (start <= end)
			array[i] = start + i;
		else
			array[i] = start - i;
		i++;
	}
	return (array);
}
