#include "../include/sastantua.h"

void	sastantua(int size)
{
	int	i;
	int width;
	int curr_size;
	int size_top_i;
	int door_size;
	int	h;
	int max_width;
	int need_print_key;
	int print_door_size;
	int blank_count;
	int center_size;

	h = calc_total_height(size);
	max_width = calc_size_width(size);
	i = 0;
	width = 3;
	curr_size = 1;
	door_size = 1;
	size_top_i = calc_size_height(curr_size);
	while (i < h)
	{
		blank_count = (max_width - width) / 2;
		center_size = width - 2;
		print_door_size = calc_door_size_on_line(i, h, door_size);
		need_print_key = is_key_on_line(i, h, door_size);
		print_line(blank_count, center_size, print_door_size, need_print_key);
		i++;
		if (i >= size_top_i)
		{
			curr_size++;
			if (curr_size % 2 == 1)
				door_size += 2;
			width += calc_size_height(curr_size) / 2 * 2;
			size_top_i += calc_size_height(curr_size);
		}
		width += 2;
	}
}
