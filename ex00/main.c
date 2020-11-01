#include "dict.h"
#include "ft.h"
#include "split.h"
#include "error.h"

int		main(int argc, char *argv[])
{
	int		fd;
	int		dict_size;
	t_dict	*dict;

	fd = -1;
	if (argc > 3)
	{
		error(1);
		return (0);
	}
	else if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	else if (argc == 3)
		fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error(1);
		return (0);
	}
	dict_size = ft_read(fd, dict);
	close(fd);
	return (0);
}
