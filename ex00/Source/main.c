#include "ft_rush02.h"

int		main(int argc, char *argv[])
{
	g_is_first = 1;
	g_read_error = 0;
	g_dict_error = 0;
	rush(argc, argv);
	return (0);
}
