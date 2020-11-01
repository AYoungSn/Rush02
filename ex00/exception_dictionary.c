#include <stdlib.h>

int	ft_check_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_english(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_clone_twice(char *str)
{
	int i;
	int clone_count;

	clone_count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ':')
			clone_count++;
		i++;
	}
	if (clone_count == 1)
		return (1);
	return (0);
}
