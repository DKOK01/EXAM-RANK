#include <stddef.h>

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char tmp;

	if (!str)
		return (NULL);
	j = 0;
	while (str[j])
		j++;
	j--;
	i = 0;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}
