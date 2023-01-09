/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:30:33 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/24 18:44:34 by ylamsiah         ###   ########.fr       */
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

	i = 'a';
	j = 'B';
	while (i <= 'y' && j <= 'Z')
	{
		ft_putchar(i);
		ft_putchar(j);
		i += 2;
		j += 2;
	}
	ft_putchar('\n');
	return (0);
}
