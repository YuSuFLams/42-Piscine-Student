/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:48:52 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/24 19:37:17 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (*(str + (++i)))
		ft_putchar(*(str + i));
	ft_putchar('\n');
}

char	*ft_rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || \
				(str[i] >= 'a' && str[i] <= 'm'))
			str[i] += 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z') || \
				(str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		i++;
	}
	return (str);
}

int	main(int ac, char **str)
{
	if (ac == 2)
	{
		ft_rot_13(str[1]);
		ft_putstr(str[1]);
	}
	else
		ft_putchar('\n');
	return (0);
}
