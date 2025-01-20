#include <unistd.h>

void	first_word(char *str)
{
	int		i;
	if (!str)
		return ;
	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
	str[i] = '\0';
	write(1, "\n", 1);
	return;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	first_word(argv[1]);
	return (0);
}