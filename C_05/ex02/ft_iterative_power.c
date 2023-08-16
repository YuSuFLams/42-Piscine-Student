/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:34:03 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/26 01:02:45 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	puis;

	i = 1;
	puis = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (i <= power)
		{
			puis *= nb;
			i++;
		}
	}
	return (puis);
}
