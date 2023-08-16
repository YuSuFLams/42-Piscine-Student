/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:57:53 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/24 18:55:33 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_countdown(void)
{
	int	i;

	i = '9';
	while (i >= '0')
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_print_countdown();
	return (0);
}
