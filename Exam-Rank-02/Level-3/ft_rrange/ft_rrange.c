#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int i = 0;
	int *arr;
	int size;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	while (i < size)
	{
		if (start <= end)
			arr[i] = end - i;
		else
			arr[i] = end + i;
		i++;
	}
	return (arr);
}
