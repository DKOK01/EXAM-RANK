#include <unistd.h>

void	putstr(char *str, int start, int end)
{
	while (start < end)
		write(1, &str[start++], 1);
}

void	rostring(char *str)
{
	int i = 0;
	int start = 0;
	int end = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	start = i;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
		i++;
	end = i;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		int word_start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		if (word_start < i)
		{
			putstr(str, word_start, i);
			write(1, " ", 1);
		}
	}
	if (start < end)
		putstr(str, start, end);
}

int	main(int ac, char **av)
{
	if (ac > 1 && av[1][0] != '\0')
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}
