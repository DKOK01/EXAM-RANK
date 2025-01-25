#include <unistd.h>

void	putc(char c)
{
	write(1, &c, 1);
}

void	str_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') && (str[i] >= 'a' && str[i] <= 'z'))
			putc(str[i] - 32);
		else if ((i != 0 && str[i - 1] != ' ' && str[i - 1] != '\t') && (str[i] >= 'A' && str[i] <= 'Z'))
			putc(str[i] + 32);
		else
			putc(str[i]);
		i++;
	}
}

int main(int ac, char **av)
{
	int i;

	if (ac > 1)
	{
		i = 0;
		while (i < ac)
		{
			str_capitalizer(av[i]);
			putc('\n');
			i++;
		}
	}
	else
		putc('\n');
	return (0);
}
