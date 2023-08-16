/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:48:11 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/19 18:56:22 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (*(dest + i))
		i++;
	j = -1;
	while (++j < nb && *(src + j))
		*(dest + i + j) = *(src + j);
	*(dest + i + j) = '\0';
	return (dest);
}
