/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:44:22 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/26 01:02:41 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	i = 2;
	fact = 1;
	if (nb == 0 && nb == 1)
		return (1);
	if (nb < 0 || nb > 13)
		return (0);
	else
	{
		while (i <= nb)
		{
			fact *= i;
			i++;
		}
	}
	return (fact);
}
