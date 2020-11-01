#include "rush02.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

void	print_error(char *str)
{
	ft_putstr(str);
	write(1, "\n", 1);
}

void	ft_print(char *str)
{
	if (!g_is_first)
		ft_putstr(" ");
	g_is_first = 0;
	ft_putstr(str);
}
