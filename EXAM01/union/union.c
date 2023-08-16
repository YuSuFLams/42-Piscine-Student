/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:48:16 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/24 19:21:21 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	pos_repeat(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (str[i] && i < pos)
	{
		if (str[i] == c)
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_union(char *str1, char *str2)
{
	int	i;

	i = 0;
	ft_strcat(str1, str2);
	while (str1[i] != '\0')
	{
		if (pos_repeat(str1, str1[i], i) == 1)
			ft_putchar(str1[i]);
		i++;
	}
	ft_putchar('\n');
	return (str1);
}

int	main(int ac, char **str)
{
	if (ac == 3)
		ft_union(str[1], str[2]);
	else
		ft_putchar('\n');
	return (0);
}
