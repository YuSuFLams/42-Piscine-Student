/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:05:37 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/24 22:30:42 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	pos_char(char s)
{
	if (s >= 'a' && s <= 'z')
		s = 'm' + 'n' - s;
	else if (s >= 'A' && s <= 'Z')
		s = 'M' + 'N' - s;
}

void	ft_alpha_mirror(char *str)
{
	int		i;
	char	k;

	i = 0;
	while (str[i] != '\0')
	{
		k = pos_char(str[i]);
		ft_putchar(k);
		i++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **str)
{
	if (ac == 2)
		ft_alpha_mirror(str[1]);
	else
		ft_putchar('\n');
	return (0);
}
