#include "../include/ft.h"
#include "../include/sastantua.h"

void	print_line(int blanks, int asteriks, int door, int key)
{
	print_left_side(blanks);
	print_asterisks(asteriks, door, key);
	print_right_side();
}

void	print_left_side(int blank_count)
{
	print_char(' ', blank_count);
	ft_putchar('/');
}

void	print_right_side()
{
	ft_putchar('\\');
	ft_putchar('\n');
}

void	print_asterisks(int asterisk_count, int door_size, int key)
{
	print_char('*', asterisk_count / 2 - door_size / 2);
	if (door_size == 1)
		ft_putchar('|');
	else if (door_size > 2)
	{
		print_char('|', door_size - 2);
		if (key)
			ft_putchar('$');
		else
			ft_putchar('|');
		ft_putchar('|');
	}
	else
		ft_putchar('*');
	print_char('*', asterisk_count / 2 - door_size / 2);
}

void	print_char(char ch, int n)
{
	while (n-- > 0)
		ft_putchar(ch);
}
