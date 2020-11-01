#include "rush02.h"

int		g_case3_f;
int		g_case2_f;
int		g_fd;
t_dict	*g_dict;
int		g_is_first;
int		g_eof;

void	ft_convert_unit(int index)
{
	char	*str;
	char	*lenth;
	int		i;

	if ((g_case3_f == 1) && (index % 3 == 0))
	{
		lenth = (char *)malloc(index + 2);
		lenth[index + 1] =  0;
		lenth[0] = '1';
		i = index;
		while (i > 0)
			lenth[i--] = '0';
		str = lenth;
		ft_print(get_val(str));
		free(str);
		g_case3_f = 0;
	}
	else if ((g_case2_f == 1) && index % 3 == 2)
		ft_print(get_val("100"));
}

int		ft_convert_num(int index, char *num, char *temp)
{
	int lenth;

	lenth = 0;
	if (*num != '0')
	{
		g_case3_f = 1;
		g_case2_f = 1;
		*temp = *num;
		if (index % 3 == 2)
		{   
			if (*num == '1' && *(num + 1) != '0')
			{
				temp[1] = *(num + 1);
				lenth++;
			}
			else
				temp[1] = '0';
		}
		else
		{
			temp[1] = 0;
		}
		ft_print(get_val(temp));
	}
	else
		g_case2_f = 0;
	return (lenth);
}

void	convert(char *num)
{
	int		index;
	int		offset;
	char	*temp;

    g_case3_f = 0;
	g_case2_f = 0;
	if (num[0] == '0')
		ft_print(get_val("0"));
	else
	{   
		temp = (char*)malloc(3);
		temp[2] = 0;
		index = ft_strlen(num);
		while (index)
		{
			ft_convert_unit(index);
			offset = ft_convert_num(index, num, temp);
			num += (1 + offset);
			index -= (1 + offset);
		}
		free(temp);
	}
	ft_putstr("\n");
}
