#include "ft.h"
#include "dict.h"
#include "error.h"
#include "split.h"

void	ft_units_copy(char *str, char *number_units, int unit_count)
{
	int i;

	i = 0;
	while (i < unit_count)
	{
		number_units[i] = str[i];
		i++;
	}
	number_units[i] = '\0';
}

char	*del_space_left(char *str)
{
	char	*temp;
	int		i;

	i = 0;
	while (str[i] != 0)
		if (is_space(str[i++]))
			break ;
	temp = (char*)malloc(sizeof(char) * i);
	ft_units_copy(str, temp, i);
	return (temp);
}

char	*del_space_right(char *str)
{
	char	*temp;
	int		i;

	while (*str != 0)
	{
		if (*str == ':')
			break ;
		str++;
	}
	while (is_space(*str))
		str++;
	i = 0;
	while (str[i] != '\0')
		i++;
	temp = (char*)malloc(sizeof(char) * i);
	ft_units_copy(str, temp, i);
	return (temp);
}

t_dict	*ft_units(char *str)
{
	t_dict	*dict;

	dict = (t_dict*)malloc(sizeof(t_dict));
	dict->key = del_space_left(str);
	dict->value = del_space_right(str);
	return (dict);
}
