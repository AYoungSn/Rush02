#include "dict.h"
#include "ft.h"

char	*del_space_left(char *str)
{
	char	*temp;
	int		i;

	i = 0;
	while (str[i] != 0)
		if (is_space(str[i++]))
			break ;
	temp = (char*)malloc(sizeof(char) * i);
	i = 0;
	while (*str != 0)
	{
		if (!(is_space(*str)))
			temp[i++] = *str;
		else
			break ;
		str++;
	}
	temp[i] = 0;
	return (temp);
}

char	*del_space_right(char *str)
{
	char	*temp;
	int		i;

	while (*str != 0)
	{
		if (*str++ == ':')
			break ;
		str++;
	}
	while (is_space(*str))
		str++;
	while (str[i] != '\0')
		i++;
	temp = (char*)malloc(sizeof(char) * i);
	i = 0;
	while (*str != 0)
	{
		if (!(is_space(*str)))
			temp[i++] = *str;
		else
			break ;
		str++;
	}
	temp[i] = 0;
	return (temp);
}

int		main(void)
{
	char str[] = "asd : qwd";
	char *temp;

	write(1, str, 9);
	write(1, "\n", 1);
	temp = del_space_left(str);
	write(1, temp, 3);
	write(1, "\n", 1);
	free(temp);
	temp = del_space_right(str);
	write(1, temp, 3);
	write(1, "\n", 1);
	free(temp);
}
