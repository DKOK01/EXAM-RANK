int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int value = 0;

	if (!str || str_base < 2 || str_base > 16)
		return (0);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			value = *str - '0';
		else if (*str >= 'A' && *str <= 'F')
			value = *str - 'A' + 10;
		else if (*str >= 'a' && *str <= 'f')
			value = *str - 'a' + 10;
		else
			break;
		if (value >= str_base)
			break;
		result = result * str_base + value;
		str++;
	}
	return (result * sign);
}
// #include <stdio.h>

// void test_ft_atoi_base(const char *str, int base, int expected)
// {
// 	int result = ft_atoi_base(str, base);
// 	if (result == expected)
// 		printf("Test passed for input \"%s\" with base %d: %d\n", str, base, result);
// 	else
// 		printf("Test failed for input \"%s\" with base %d: expected %d, got %d\n", str, base, expected, result);
// }

// int main(void)
// {
// 	// Test cases
// 	test_ft_atoi_base("1A", 16, 26);
// 	test_ft_atoi_base("1010", 2, 10);
// 	test_ft_atoi_base("7F", 16, 127);
// 	test_ft_atoi_base("123", 10, 123);
// 	test_ft_atoi_base("-1A", 16, -26);
// 	test_ft_atoi_base("   1A", 16, 26);
// 	test_ft_atoi_base("1A", 10, 1); // Invalid character for base 10
// 	test_ft_atoi_base("1a", 16, 26);
// 	test_ft_atoi_base("1A", 8, 1); // Invalid character for base 8
// 	test_ft_atoi_base("   -1A", 16, -26);
// 	test_ft_atoi_base("0", 10, 0);
// 	test_ft_atoi_base("   +1A", 16, 26);
// 	test_ft_atoi_base("   -0", 10, 0);
// 	test_ft_atoi_base("   +0", 10, 0);
// 	return 0;
// }