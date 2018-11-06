#include "../include/ft.h"
#include "../include/sastantua.h"

int		main(int ac, char **av)
{
	if (ac == 2)
		sastantua(ft_atoi(av[1]));
	else
		ft_putstr("Usage: sastantua size\n");

	return (0);
}
