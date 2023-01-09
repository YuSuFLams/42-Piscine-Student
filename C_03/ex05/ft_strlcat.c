/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:55:56 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/01/09 05:25:30 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dl;
	unsigned int	sl;

	i = 0;
	j = 0;
	while (*(dest + j))
		j++;
	dl = j;
	sl = ft_strlen(src);
	if (size == 0 || size <= dl)
		return (sl + size);
	while (*(src + j)&& i < size - dl - 1)
	{
		*(dest + j) = *(src + j);
		i++;
		j++;
	}
	*(dest + j) = '\0';
	return (dl + sl);
}
