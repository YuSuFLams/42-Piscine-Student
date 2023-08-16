/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:46:56 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/19 18:52:05 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (*(dest + i))
		i++;
	j = -1;
	while (*(src + (++j)))
		*(dest + i + j) = *(src + j);
	*(dest + i + j) = '\0';
	return (dest);
}