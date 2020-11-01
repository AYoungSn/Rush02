#include <unistd.h>
#include "error.h"

void	error(int number)
{
	if (number == 1)
		write(1, "Error\n", 6);
	if (number == 2)
		write(1, "Dict Error\n", 11);
}

void	ft_num_error(char *str)
{
	while (*str != 0)
	{
		if (!(*str >= '0') && !(*str <= '9'))
			break ;
		str++;
	}
	error(1);
}
