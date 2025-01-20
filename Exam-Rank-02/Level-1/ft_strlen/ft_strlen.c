#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	while (str[i])
		i++;
	return (i);
}

int main()
{
	printf("%d\n", ft_strlen("hello world"));
	return (0);
}