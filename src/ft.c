#include "../include/sastantua.h"

int		ft_atoi(char *str)
{
	int	n;

	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}