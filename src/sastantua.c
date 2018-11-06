#include "../include/ft.h"
#include "../include/sastantua.h"

void	sastantua(int size)
{
	int	h;
	int max_width;

	h = calc_total_height(size);
	max_width = calc_size_width(size);
	print_lines(h, max_width);
}

int		calc_size_height(int size)
{
	return (size + 2);
}

int		calc_total_height(int size)
{
	return ((2 * 3 + (size - 1)) * size / 2);
}

void	print_lines(int h, int max_width)
{
	int	i;
	int width;
	int size;
	int size_top_i;
	int door_size;

	i = 0;
	width = 3;
	size = 1;
	door_size = 1;
	size_top_i = calc_size_height(size);
	while (i < h)
	{
		print_left_side((max_width - width)/2);
		if (i >= h - door_size)
		{
			print_body(width - 2, door_size,
				door_size >= 5 && i == h - 1 - (door_size / 2));
		} else
			print_body(width - 2, 0, 0);
		print_right_side((max_width - width)/2);
		i++;
		
		if (i >= size_top_i)
		{
			size++;
			if (size % 2 == 1)
				door_size += 2;
			width += calc_size_height(size) / 2 * 2;
			size_top_i += calc_size_height(size);
		}
		width += 2;
	}
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

void	print_body(int asterisk_count, int d, int key)
{
	int start_d;

	if (d != 0)
	{
		start_d = (asterisk_count - d) / 2;
		print_char('*', start_d);
		if (key)
		{
			print_char('|', d - 2);
			ft_putchar('$');
			ft_putchar('|');
			print_char('*', start_d);
		}
		else
		{
			print_char('|', d);
			print_char('*', start_d);
		}
	}
	else
		print_char('*', asterisk_count);
}

void	print_char(char ch, int n)
{
	while (n-- > 0)
		ft_putchar(ch);
}

int		calc_size_width(int size)
{
	int	i;
	int	w;
	int step;

	w = 2;
	i = 2;
	while (i <= size)
	{
		step = calc_size_height(i) / 2;
		w += calc_size_height(i) + step;
		i++;
	}
	w = (w + 1) * 2 + 1;
	return (w);
}
