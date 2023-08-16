/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:49:09 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/24 19:43:54 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	pos_char(char str)
{
	int	pos;

	if (str >= 'a' && str <= 'z')
		pos = str - 'a';
	else if (str >= 'A' && str <= 'Z')
		pos = str - 'A';
	return (pos);
}

char	*ft_repeat_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || \
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			j = pos_char(str[i]);
			while (j >= 0)
			{
				ft_putchar(str[i]);
				j--;
			}
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (str);
}

int	main(int ac, char **str)
{
	if (ac == 2)
		ft_repeat_alpha(str[1]);
	else
		ft_putchar('\n');
	return (0);
}
