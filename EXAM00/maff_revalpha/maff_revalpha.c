/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:30:40 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/24 18:43:16 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	i;
	int	j;

	i = 'z';
	j = 'Y';
	while (i >= 'b' && j >= 'A')
	{
		ft_putchar(i);
		ft_putchar(j);
		i -= 2;
		j -= 2;
	}
	ft_putchar('\n');
	return (0);
}
