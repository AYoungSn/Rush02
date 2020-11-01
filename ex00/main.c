/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoahn <youngseon0218@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 23:28:48 by yoahn             #+#    #+#             */
/*   Updated: 2020/11/01 23:28:52 by yoahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		main(int argc, char *argv[])
{
	char *num;

	g_is_first = 1;
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
	else if (argc == 2)
	{
		ft_open("numbers.dict");
		num = argv[1];
	}
	else
	{
		print_error("Error");
		return (0);
	}
	convert(num);
	return (0);
}
