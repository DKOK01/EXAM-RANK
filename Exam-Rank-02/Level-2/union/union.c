#include <unistd.h>

int main (int ac, char **av)
{
	int i = 0;
	int array[256] = {0};
	char *s1 = av[1];
	char *s2 = av[2];

	if (ac == 3)
	{
		while (s1[i])
		{
			if (array[(unsigned char)s1[i]] == 0)
			{
				write(1, &s1[i], 1);
				array[(unsigned char)s1[i]] = 1;
			}
			i++;
		}
		i = 0;
		while (s2[i])
		{
			if (array[(unsigned char)s2[i]] == 0)
			{
				write(1, &s2[i], 1);
				array[(unsigned char)s2[i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}