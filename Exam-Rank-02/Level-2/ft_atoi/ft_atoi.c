int	ft_atoi(const char *str)
{
	int i;
	int signe;
	int result;

	signe = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || str[i] >= '\t' && str[i] <= '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * signe);
}
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	printf("Test 1: '     42'\n");
// 	printf("Expected: %d\n", atoi("     42"));
// 	printf("Result: %d\n\n", ft_atoi("     42"));

// 	printf("Test 2: '-42'\n");
// 	printf("Expected: %d\n", atoi("-42"));
// 	printf("Result: %d\n\n", ft_atoi("-42"));

// 	printf("Test 3: '+42'\n");
// 	printf("Expected: %d\n", atoi("+42"));
// 	printf("Result: %d\n\n", ft_atoi("+42"));

// 	printf("Test 4: '   -42abc'\n");
// 	printf("Expected: %d\n", atoi("   -42abc"));
// 	printf("Result: %d\n\n", ft_atoi("   -42abc"));

// 	printf("Test 5: 'abc42'\n");
// 	printf("Expected: %d\n", atoi("abc42"));
// 	printf("Result: %d\n\n", ft_atoi("abc42"));

// 	printf("Test 6: '2147483647'\n");
// 	printf("Expected: %d\n", atoi("2147483647"));
// 	printf("Result: %d\n\n", ft_atoi("2147483647"));

// 	printf("Test 7: '-2147483648'\n");
// 	printf("Expected: %d\n", atoi("-2147483648"));
// 	printf("Result: %d\n\n", ft_atoi("-2147483648"));

// 	return 0;
// }
