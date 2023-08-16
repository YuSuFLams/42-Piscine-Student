/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 20:27:54 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/26 22:23:27 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

void	ft_expand_str(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str) - 1;
	while (str[i])
	{
		while (str[i] == '\t' || str[i] == ' ')
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
		{
			ft_putchar(str[i]);
			i++;
		}
		while (*(str + len) && (*(str + len) == ' ' || *(str + len) == '\t'))
			len--;
		if (i == len + 1)
			break ;
		else if (i != len)
			write(1, "   ", 3);
		i++;
	}
	ft_putchar('\n');
}

int	main(int ac, char **str)
{
	if (ac == 2)
		ft_expand_str(str[1]);
	else
		ft_putchar('\n');
	return (0);
}
