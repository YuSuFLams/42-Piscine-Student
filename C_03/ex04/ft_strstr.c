/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 11:49:26 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/01/09 05:28:29 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j])
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
