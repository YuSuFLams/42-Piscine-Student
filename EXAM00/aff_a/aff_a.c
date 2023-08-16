/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:28:12 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/21 17:28:12 by ylamsiah         ###   ########.fr       */
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

	if (ac == 2)
	{
		i = 0;
		while (str[1][i] != '\0')
		{
			if (str[1][i] == 'a')
			{
				ft_putchar('a');
				break ;
			}
			i++;
		}
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
