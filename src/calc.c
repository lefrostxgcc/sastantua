#include "../include/sastantua.h"

int		calc_size_height(int size)
{
	return (size + 2);
}

int		calc_total_height(int size)
{
	return ((2 * 3 + (size - 1)) * size / 2);
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

int		calc_door_size_on_line(int line, int height, int door_size)
{
	if (line >= height - door_size)
		return door_size;
	else
		return 0;
}

int		is_key_on_line(int line, int height, int door_size)
{
	return (door_size >= 5 && line == height - 1 - (door_size / 2));
}
