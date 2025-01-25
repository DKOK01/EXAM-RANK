unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	max;

	if (a == 0 || b == 0)
		return (0);

	if (a > b)
		max = a;
	else
		max = b;

	while (1)
	{
		if (max % a == 0 && max % b == 0)
			return (max);
		max++;
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("LCM of 5 and 10: %u\n", lcm(5, 10)); // Output: 10
// 	printf("LCM of 4 and 6: %u\n", lcm(4, 6));  // Output: 12
// 	printf("LCM of 0 and 10: %u\n", lcm(0, 10)); // Output: 0
// 	printf("LCM of 21 and 6: %u\n", lcm(21, 6)); // Output: 42
// }
