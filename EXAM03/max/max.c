/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 20:40:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/25 22:43:03 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < len)
	{
		j = i;
		while (j < len)
		{
			if (tab[i] < tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab[0]);
}
