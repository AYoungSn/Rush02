#include "rush02.h"

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
	{
		if (is_space(str[i]) || str[i] == ':')
			break ;
		i++;
	}
	temp = (char*)malloc(sizeof(char) * i);
	ft_units_copy(str, temp, i);
	return (temp);
}

char	*del_space_right(char *str)
{
	char	*temp;
	int		i;

	while (is_space(*str))
		str++;
	i = 0;
	while (str[i] != '\0')
		i++;
	temp = (char*)malloc(sizeof(char) * i);
	ft_units_copy(str, temp, i);
	return (temp);
}

void	insert_key_value(char *str)
{
	char	*key;
	char	*val;

	key = del_space_left(str);
	while (*str != ':')
		str++;
	str++;
	val = del_space_right(str);
	push_front(key, val);
}
