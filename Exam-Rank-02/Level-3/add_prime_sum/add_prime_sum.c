#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int is_prime(int num)
{
	int i;

	i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void ft_putnbr(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int num = ft_atoi(av[1]);
		int sum = 0;
		int i = 2;
		while (i <= num)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return(0);
}
