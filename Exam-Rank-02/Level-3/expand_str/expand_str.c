#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int word_started = 0;

	if (ac == 2)
	{
		while (av[1][i])
		{
			while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
			if (av[1][i])
			{
				if (word_started)
					write(1, "   ", 3);
				while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
					write(1, &av[1][i++], 1);
				word_started = 1;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}