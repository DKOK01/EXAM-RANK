#include <stddef.h>
size_t	ft_strspn(const char *s, const char *accept)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (!accept[j])
			return (i);
		i++;
	}
	return (i);
}
#include <stdio.h>

int main()
{
	const char *s = "abcdef123456";
	const char *accept = "abc";
	size_t result;

	result = ft_strspn(s, accept);
	printf("The length of the initial segment of s which consists only of characters in accept is: %zu\n", result);

	return 0;
}
