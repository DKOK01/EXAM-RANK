#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	int 	i;
	char	*str;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i])
		i++;
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
#include <stdio.h>
int main ()
{
	char *str = ft_strdup("hello world");
	printf("%s\n", str);
	free(str); // always free the memory
}