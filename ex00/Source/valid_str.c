#include "rush02.h"

int		is_space(char ch)
{
	if (ch == '\n' || ch == '\f' || ch == '\v'
			|| ch == '\r' || ch == '\t' || ch == ' ')
		return (1);
	return (0);
}

int		ft_is_same(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i] == 0 ? 1 : 0);
}
