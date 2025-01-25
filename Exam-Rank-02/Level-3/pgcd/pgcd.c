#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int n;
	int a;
	int b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);

		if (a <= 0 || b <= 0)
		{
			printf("\n");
			return (0);
		}
		if (a > b)
			n = a;
		else
			n = b;
		while (1)
		{
			if (a % n == 0 && b % n == 0)
			{
				printf("%d\n", n);
				return (0);
			}
			n--;
		}
	}
	printf("\n");
	return (0);
}
