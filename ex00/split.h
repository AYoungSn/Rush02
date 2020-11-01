#ifndef SPLIT_H
# define SPLIT_H

# include "dict.h"
# include "ft.h"

void	ft_units_copy(char *str, char *number_units, int unit_count);
char	*del_space_left(char *str);
char	*del_space_right(char *str);
t_dict	ft_units(char *str);

#endif
