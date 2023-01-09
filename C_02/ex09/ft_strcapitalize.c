/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 10:40:44 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/01/09 04:59:48 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (*(str + (++i)))
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
			*(str + i) += 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = 1;
	ft_strlowcase(str);
	while (*(str + (++i)))
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			if (tmp == 1)
				*(str + i) -= 32;
			tmp = 0;
		}
		else if (*(str + i) >= '0' && *(str + i) <= '9')
			tmp = 0;
		else
			tmp = 1;
	}
	return (str);
}
