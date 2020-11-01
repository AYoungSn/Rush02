#include "ft_rush02.h"

char	*ft_fread(int fd)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)malloc(MAX_SIZE + 1);
	while (read(fd, str + i, 1) == 1)
	{
		//g_eof = 0;
		if (i == MAX_SIZE)
		{
			free(str);
			error("Error\n");
			return (0);
		}
		if (str[i] == '\n')
		{
			str[i] = 0;
			break ;
		}
		i++;
	}
	return (str);
}

void	ft_open(char *path)
{
	if ((g_fd = open(path, O_RDONLY)) == -1)
	{
		error(1);
		return ;
	}
}
