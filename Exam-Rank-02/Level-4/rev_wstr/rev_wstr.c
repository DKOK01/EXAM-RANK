#include <unistd.h>

void	rev_wstr(char *str)
{
	int		i = 0;
	int		start;
	int		end;

	while (str[i])
		i++;
	end = i;
	while (end > 0)
	{
		while (end > 0 && str[end - 1] != ' ')
			end--;
		start = end;
		while (str[start] && str[start] != ' ')
			write(1, &str[start++], 1);
		if (end > 1)
			write(1, " ", 1);
		end--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
