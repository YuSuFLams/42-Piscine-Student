/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 01:31:40 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/26 01:11:13 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!(*range))
		return (-1);
	while (i < (max - min))
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
