#include "../include/sastantua.h"

void	sastantua(int size)
{
	int	line;
	int line_width;
	int curr_size;
	int size_last_line;
	int door_size;
	int	total_height;
	int max_width;
	int need_print_key;
	int print_door_size;
	int blank_count;
	int center_size;

	total_height = calc_total_height(size);
	max_width = calc_size_width(size);
	line = 0;
	line_width = 3;
	curr_size = 1;
	door_size = 1;
	size_last_line = calc_size_height(curr_size);
	while (line < total_height)
	{
		blank_count = (max_width - line_width) / 2;
		center_size = line_width - 2;
		print_door_size = calc_door_size_on_line(line, total_height, door_size);
		need_print_key = is_key_on_line(line, total_height, door_size);
		print_line(blank_count, center_size, print_door_size, need_print_key);
		line++;
		if (line >= size_last_line)
		{
			curr_size++;
			if (curr_size % 2 == 1)
				door_size += 2;
			line_width += calc_size_height(curr_size) / 2 * 2;
			size_last_line += calc_size_height(curr_size);
		}
		line_width += 2;
	}
}
