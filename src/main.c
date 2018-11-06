#include <unistd.h>
#include <fcntl.h>
#include "../include/ft.h"
#include "../include/sastantua.h"

int		main(int ac, char **av)
{
	int fd;

	fd = 1;
	set_fd_output(fd);
	if (ac == 2 || ac == 3)
	{
		if (ac == 3)
		{
			fd = creat(av[2], S_IRUSR | S_IWUSR);
			if (fd != -1)
				set_fd_output(fd);
			else
			{
				set_fd_output(2);
				ft_putstr("Error: cannot open file\n");
				return (1);
			}
		}
		sastantua(ft_atoi(av[1]));
	}
	else
	{
		set_fd_output(2);
		ft_putstr("Usage: sastantua size [filename]\n");
	}
	return (0);
}
