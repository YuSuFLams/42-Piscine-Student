/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:10:02 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/24 21:46:49 by ylamsiah         ###   ########.fr       */
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
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_last_word(char *str)
{
	int	i;

	i = ft_strlen(str) - 1;
	while ((str[i] == '\t' || str[i] == ' ') && i >= 0)
		i--;
	while (str[i] && (str[i] != '\t' && str[i] != ' ') && i >= 0)
		i--;
	i++;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (str);
}

int	main(int ac, char **str)
{
	if (ac == 2)
		ft_last_word(str[1]);
	else
		ft_putchar('\n');
	return (0);
}
