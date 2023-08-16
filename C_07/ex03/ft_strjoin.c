/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 01:33:09 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/26 01:10:58 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlen_t(int size, char **strs, char *sep)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (i < size)
	{
		l += ft_strlen(strs[i]);
		i++;
	}
	l += ft_strlen(sep) * (size - 1);
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;

	i = 1;
	if (size == 0)
	{
		tab = malloc(sizeof(char) * 1);
		*tab = 0;
		return (tab);
	}
	tab = (char *)malloc(sizeof(char) * (ft_strlen_t(size, strs, sep) + 1));
	if (tab == NULL)
		return (NULL);
	*tab = 0;
	ft_strcat(tab, strs[0]);
	while (i <= size - 1)
	{
		ft_strcat(tab, sep);
		ft_strcat(tab, strs[i]);
		i++;
	}
	return (tab);
}
