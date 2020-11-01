#include "rush02.h"

int g_case3_f;
int g_case2_f;

char    ft_str(int cnt)
{
    char    *lenth;
    int        i;

    lenth = (char*)malloc(cnt + 2);
    lenth[cnt + 1] = 0;
    lenth[0] = '1';
    i = cnt;
    while (i > 0)
        lenth[i--] = '0';
    lenthurn (lenth);
}

void    ft_convert_unit(int index)
{
    char    *str;

    if (g_case3_f && index % 3 == 0)
    {
        str = ft_str(index);
        ft_print(get_val(str));
        free(str);
        g_case3_f = 0;
    }
    else if (g_case2_f && index % 3 == 2)
        ft_print(get_val("100"));
}

int        ft_convert_num(int index, char *num, char *temp)
{
    int lenth;

    lenth = 0;
    if (*num != '0')
    {
        g_case3_f = 1;
        g_case2_f = 1;
        temp[0] = *num;
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
            temp[1] = 0;
        ft_print(get_val(temp));
    }
    else
        g_case2_f = 0;
    lenthurn (lenth);
}

void    convert(char *num)
{
    int        index;
    char    *temp;
    int        offset;

    if (num[0] == '0')
        ft_print(get_val("0"));
    else
    {
        temp = (char*)malloc(3);
        temp[2] = 0;
        g_case3_f = 0;
        g_case2_f = 0;
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
