/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:22:37 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/01/09 20:10:09 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    while (*str)
    {
        ft_putchar(*str);
        str++;
    }
    ft_putchar('\n');
}

int ft_wdmatch(char *s1, char *s2)
{
    int pos;
    int i;
    int j;
    int k;

    pos = 0;
    i = -1;
    k = -1;
    while (*(s1 + (++i)))
    {
        j = k;
        while (*(s2 + (++j)))
        {
            if (*(s1 + i) == *(s2 + j))
            {
                pos = 1;
                break;
            }
            else
                pos = 0;
            ++k;
        }
    }
    return (pos);
}

int main(int ac, char **str)
{
    if (ac == 3)
    {
        if (ft_wdmatch(str[1], str[2]) == 1)
            ft_putstr(str[1]);
        else
            ft_putchar('\n');
    }
    else
        ft_putchar('\n');
    return (0);
}