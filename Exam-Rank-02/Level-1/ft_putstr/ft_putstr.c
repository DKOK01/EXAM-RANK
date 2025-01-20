#include <unistd.h>

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str)
		write(1, str++, 1);
}

int main()
{
	ft_putstr("hello world");
	return 0;
}