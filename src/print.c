#include "../include/ft.h"
#include "../include/sastantua.h"

void	print_line(int blank_count, int center_size, int door_size, int key)
{
	print_left_side(blank_count);
	print_center(center_size, door_size, key);
	print_right_side();
}

void	print_left_side(int blank_count)
{
	ft_putchar_n(' ', blank_count);
	ft_putchar('/');
}

void	print_right_side()
{
	ft_putchar('\\');
	ft_putchar('\n');
}
void	print_center(int center_size, int door_size, int key)
{
	int asterisk_count;

	asterisk_count = center_size / 2 - door_size / 2;
	ft_putchar_n('*', asterisk_count);
	if (door_size > 0)
		print_door(door_size, key);
	else
		ft_putchar('*');
	ft_putchar_n('*', asterisk_count);
}

void	print_door(int door_size, int key)
{
	if (door_size < 1)
		ft_putchar('*');
	else if (door_size == 1)
		ft_putchar('|');
	else if (door_size > 1)
	{
		ft_putchar_n('|', door_size - 2);
		if (key)
			ft_putchar('$');
		else
			ft_putchar('|');
		ft_putchar('|');
	}
}
