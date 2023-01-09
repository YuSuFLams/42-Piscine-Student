/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:29:58 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/25 22:38:26 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(ft_strlen(src) + 1 * sizeof(char));
	if (!dest)
		return (dest);
	i = -1;
	while (*(src + (++i)))
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
