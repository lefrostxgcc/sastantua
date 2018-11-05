#ifndef FT_SASTANTUA_H
# define FT_SASTANTUA_H

# include <unistd.h>

void	ft_putchar(char c);
void	process_args(char *str);
void	print_error_msg(char *msg);
void	sastantua(int size);
int		ft_atoi(char *str);
int		calc_size_width(int size);
int		calc_size_height(int size);
int		calc_total_height(int size);
void	print_lines(int h, int max_width);
void	print_char(char ch, int n);
void	print_left(int blank_count);
void	print_right(int blank_count);
void	print_body(int asterisk_count);

#endif
