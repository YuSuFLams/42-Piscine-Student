/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 01:30:51 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/26 01:11:31 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;

	i = 0;
	p = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (max <= min)
		return (NULL);
	while (i < (max - min))
	{
		p[i] = min + i;
		i++;
	}
	return (p);
}
