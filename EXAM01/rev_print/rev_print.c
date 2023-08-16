/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:49:00 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/24 19:38:47 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_rev_print(char *str)
{
	int	i;

	i = ft_strlen(str);
	while (--i >= 0)
		ft_putchar(*(str + i));
	ft_putchar('\n');
	return (str);
}

int	main(int ac, char **str)
{
	if (ac == 2)
		ft_rev_print(str[1]);
	else
		ft_putchar('\n');
	return (0);
}
