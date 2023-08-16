/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 19:45:57 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/19 19:01:05 by ylamsiah         ###   ########.fr       */
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
}

int	main(int ac, char **argv)
{
	if (ac)
	{
		ft_putstr(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}
