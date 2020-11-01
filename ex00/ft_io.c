/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoahn <youngseon0218@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 23:28:37 by yoahn             #+#    #+#             */
/*   Updated: 2020/11/01 23:28:41 by yoahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_fread(int fd)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)malloc(MAX_SIZE + 1);
	while (read(fd, str + i, 1) == 1)
	{
		g_eof = 0;
		if (i == MAX_SIZE)
		{
			free(str);
			print_error("Dict Error");
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
	char *line;

	if ((g_fd = open(path, O_RDONLY)) == -1)
	{
		print_error("Dict Error");
		return ;
	}
	g_eof = 1;
	while ((line = ft_fread(g_fd)))
	{
		if (g_eof++)
			break ;
		if (*line == '\0')
			continue ;
		if (!ft_is_valid_key_value(line))
		{
			print_error("Dict Error");
			break ;
		}
		insert_key_value(line);
	}
	close(g_fd);
}
