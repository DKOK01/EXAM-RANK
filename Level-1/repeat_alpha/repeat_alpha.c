#include <unistd.h>

void print_(char c, char a)
{
	int j;

	j = c - a + 1;
	while (j--)
		write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int (i), (j);

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				print_(argv[1][i], 'A');
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				print_(argv[1][i], 'a');
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}