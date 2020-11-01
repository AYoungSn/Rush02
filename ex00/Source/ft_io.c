#include "ft_rush02.h"

char    *ft_fread(int fd)
{

}

void    ft_open(char *path)
{
    if ((g_fd = open(path, O_RDONLY)) == -1)
	{
		error(1);
		return ;
	}
    
}