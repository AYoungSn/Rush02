#include "rush02.h"

int		main(int argc, char *argv[])
{
	char *num;

	g_is_first = 1;
	g_read_error = 0;
	g_dict_error = 0;
	if (argc > 3)
	{
		print_error("Error");
		return (0);
	}
	else if (argc == 3)
	{
		ft_open(argv[1]);
		num = argv[2];
	}
	else
	{
		ft_open("../numbers.dict");
		num = argv[1];
	}
	convert(num);
	free(num);
	return (0);
}
