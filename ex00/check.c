/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoahn <youngseon0218@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 23:27:18 by yoahn             #+#    #+#             */
/*   Updated: 2020/11/01 23:27:21 by yoahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_is_space(char ch)
{
	if (ch == ' ' || (ch >= 9 && ch <= 13))
		return (1);
	return (0);
}

int	ft_is_number(char ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	return (0);
}

int	ft_is_valid_number(char *str)
{
	int i;

	i = 0;
	if (!str || (*str == '0' && *(str + 1)))
		return (0);
	while (str[i] != '\0')
	{
		if (ft_is_number(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_valid_key_value(char *str)
{
	int count_key;
	int count_value;
	int count_colon;
	int i;

	count_key = 0;
	count_value = 0;
	count_colon = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ':')
			count_colon++;
		else if (!ft_is_space(str[i]))
		{
			if (count_colon == 1)
				count_value++;
			else
				count_key++;
		}
		i++;
	}
	if (count_colon == 1 && count_key > 0 && count_value > 0)
		return (1);
	return (0);
}
