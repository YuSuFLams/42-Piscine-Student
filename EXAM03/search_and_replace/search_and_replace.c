/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:11:00 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/24 21:37:30 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	main(int ac, char **str)
{
	int	i;

	if (ac == 4)
	{
		if (str[2][1] == '\0' && str[3][1] == '\0' )
		{
			i = 0;
			while (str[1][i])
			{
				if (str[1][i] == str[2][0])
					str[1][i] = str[3][0];
				ft_putchar(str[1][i]);
				i++;
			}
			ft_putchar('\n');
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
