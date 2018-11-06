#include <unistd.h>
#include "../include/ft.h"

int		fd_output;

void	set_fd_output(int fd)
{
	fd_output = fd;
}

void	ft_putchar(char c)
{
	write(fd_output, &c, 1);
}

void	ft_putchar_n(char c, int n)
{
	while (n-- > 0)
		ft_putchar(c);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		++str;
	}
}

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
