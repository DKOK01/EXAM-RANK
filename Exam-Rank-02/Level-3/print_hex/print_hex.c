#include <unistd.h>

int		ft_atoi(char *str)
{
	int res = 0;

	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}

void	ft_puthex(int nbr)
{
	char *hex = "123456789abcdef";

	if (nbr >= 16)
		ft_puthex(nbr / 16);
	write(1, &hex[nbr % 16], 1);
}

int main(int ac, char **av)
{
	int nbr;
	if (ac == 2)
	{
		nbr = ft_atoi(av[1]);
		ft_puthex(nbr);
	}
	write(1, "\n", 1);
	return(0);
}
