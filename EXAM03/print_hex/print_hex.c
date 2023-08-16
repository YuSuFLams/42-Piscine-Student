/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:30:40 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/26 22:16:46 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return ((int) nbr * sign);
}

void	ft_putlowhexa(int nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr >= 0 && nbr < 16)
		ft_putchar(base[nbr]);
	else if (nbr > 15)
	{
		ft_putlowhexa(nbr / 16);
		ft_putlowhexa(nbr % 16);
	}
}

int	main(int ac, char **str)
{
	if (ac == 2)
	{
		ft_putlowhexa(ft_atoi(str[1]));
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
