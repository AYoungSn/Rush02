#ifndef FT_RUSH02_H
# define FT_RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct      s_dict
{
    char            *key;
    char            *value;
    struct s_dict   *next;
}                   t_dict;

extern t_dict       *g_dict;
extern int g_fd;

t_dict *create_node(char *key, char *val);
void push_front(char *key, char *val);
char *get_val(char *key);

void	ft_units_copy(char *str, char *number_units, int unit_count);
char	*del_space_left(char *str);
char	*del_space_right(char *str);
void insert_key_value(char *str);
int		is_space(char ch);

char    *ft_fread(int fd);
void    ft_open(char *path);
int ft_is_same(char *s1, char *s2);