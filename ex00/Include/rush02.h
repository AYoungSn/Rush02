#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define MAX_SIZE 1024

typedef struct		s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}					t_dict;

extern t_dict		*g_dict;
extern int			g_fd;
extern int			g_is_first;
extern int			g_eof;
extern int			g_dict_error;
extern int			g_read_error;

//linked_list.c
t_dict				*create_node(char *key, char *val);
void				push_front(char *key, char *val);
char				*get_val(char *key);

//dict_split.c
void				ft_units_copy(char *str, char *number, int unit_count);
char				*del_space_left(char *str);
char				*del_space_right(char *str);
void				insert_key_value(char *str);

//ft_io.c
char				*ft_fread(int fd);
void				ft_open(char *path);

//valid_str
int					ft_is_same(char *s1, char *s2);
int					is_space(char ch);

//print.c
int					ft_strlen(char *str);
void				ft_putstr(char *str);
void				print_error(char *str);
void				ft_print(char *str);

// check.c
int					ft_is_space(char ch);
int					ft_is_number(char ch);
int					ft_is_valid_number(char *str);
int					ft_is_valid_key_value(char *str);

// rush.c
void				ft_convert_unit(int index);
int					ft_convert_num(int index, char *num, char *temp);
void				convert(char *num);

#endif
