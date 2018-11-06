#ifndef FT_SASTANTUA_H
# define FT_SASTANTUA_H

void	sastantua(int size);
int		calc_size_width(int size);
int		calc_size_height(int size);
int		calc_total_height(int size);
void	print_line(int i, int width, int door_size, int h, int max_width);
void	print_char(char ch, int n);
void	print_left_side(int blank_count);
void	print_right_side();
void	print_body(int asterisk_count, int d, int key);

#endif
