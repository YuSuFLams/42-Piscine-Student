/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:03:26 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/24 22:20:46 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	pos_char(char *str, char h, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == h)
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}

char	*ft_inter(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				if (pos_char(str1, str1[i], i) == 1)
				{
					ft_putchar(str1[i]);
					break ;
				}
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
	return (str1);
}

int	main(int ac, char **str)
{
	if (ac == 3)
		ft_inter(str[1], str[2]);
	else
		ft_putchar('\n');
	return (0);
}
