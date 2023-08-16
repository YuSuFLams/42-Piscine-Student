/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:31:16 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/26 22:10:52 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	nbr_prim(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	i = 2;
	while (i <= (n / i))
	{
		if (n % i == 0)
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= (-1);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
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

int	add_prime_sum(int n)
{
	int	i;
	int	sum;

	if (n <= 1)
		return (0);
	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (nbr_prim(i) == 1)
			sum += i;
		i++;
	}
	return (sum);
}

int	main(int ac, char **str)
{
	int	i;

	if (ac == 2)
	{
		ft_putnbr(add_prime_sum(ft_atoi(str[1])));
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	return (0);
}
