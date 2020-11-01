#ifndef FT_DICT_H
# define FT_DICT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_dict
{
	char	*key;
	char	*value;
	int		size;
}				t_dict;

#endif
