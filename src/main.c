#include "../include/sastantua.h"

int		main(int ac, char **av)
{
	if (ac == 2)
		process_args(av[1]);
	else
		print_error_msg("Usage: sastantua size");

	return (0);
}
