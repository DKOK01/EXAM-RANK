#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	char	*dest;

	dest = s1;
	if (!s1 || !s2)
		return (NULL);
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';
	return (dest);
}

int main()
{
	char s1[] = "";
	char s2[] = "ayyyyyy";
	char *str = ft_strcpy(s1, s2);
	printf("%s\n", s1);
	return (0);
}