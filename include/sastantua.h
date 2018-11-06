#ifndef FT_SASTANTUA_H
# define FT_SASTANTUA_H

void	sastantua(int size);
int		calc_size_width(int size);
int		calc_size_height(int size);
int		calc_total_height(int size);
int		calc_door_size_on_line(int line, int height, int door_size);
int		is_key_on_line(int line, int height, int door_size);
void	print_line(int blank_count, int center_size, int door_size, int key);
void	print_door(int door_size, int key);
void	print_left_side(int blank_count);
void	print_right_side();
void	print_center(int center_size, int door_size, int key);

#endif
