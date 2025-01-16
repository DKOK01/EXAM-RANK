#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j;

	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}
	return i;
}
#include <stdio.h>

int main(void)
{
	const char str[] = "hello, world";
	const char reject[] = "world";
	size_t result;

	result = ft_strcspn(str, reject);
	printf("The length of the initial segment of str which does not contain any of the characters in reject is: %zu\n", result);

	return 0;
}