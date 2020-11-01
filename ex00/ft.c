#include "dict.h"
#include "split.h"
#include "ft.h"

int		is_space(char ch)
{
	if (ch == '\n' || ch == '\f' || ch == '\v'
			|| ch == '\r' || ch == '\t' || ch == ' ')
		return (1);
	return (0);
}

int		ft_read(int fd, t_dict *dict)
{
	char	buf[1024];
	char	*str;
	int		size;
	int		i;
	int		ind;

	ind = 0;
	while ((size = read(fd, buf, 1024)) > 0)
	{
		i = 0;
		while (i < size)
		{
			while (buf[i] != '\n')
				i++;
			buf[i] = '\0';
			dict += ind;
			dict = ft_units(buf + i);
			dict -= ind;
			ind++;
		}
	}
	return (ind);
}
