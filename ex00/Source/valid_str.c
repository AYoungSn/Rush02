#include "ft_rush02.h"

int		is_space(char ch)
{
	if (ch == '\n' || ch == '\f' || ch == '\v'
			|| ch == '\r' || ch == '\t' || ch == ' ')
		return (1);
	return (0);
}

int ft_is_same(char *s1, char *s2);