#include "../include/sastantua.h"

void	sastantua(int ssize)
{
	int	i;
	int width;
	int size;
	int size_top_i;
	int door_size;
	int	h;
	int max_width;

	h = calc_total_height(ssize);
	max_width = calc_size_width(ssize);
	i = 0;
	width = 3;
	size = 1;
	door_size = 1;
	size_top_i = calc_size_height(size);
	while (i < h)
	{
		print_line((max_width - width)/2, width - 2,
			(i >= h - door_size) ? door_size : 0,
			is_need_print_key(i, h, door_size));
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
