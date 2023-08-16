/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:01:03 by ylamsiah          #+#    #+#             */
/*   Updated: 2022/11/26 22:06:28 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_nbr(int nbr)
{
	int	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char		*str;
	int			i;
	long int	s;

	s = (long int)nbr;
	str = (char *)malloc(count_nbr(s) + 1 * sizeof(char));
	if (!str)
		return (str);
	i = count_nbr(s);
	str[i] = '\0';
	if (!s)
		str[i - 1] = s + '0';
	if (s < 0)
	{
		str[0] = '-';
		s *= (-1);
	}
	while (s > 0)
	{
		str[i - 1] = (s % 10) + '0';
		s /= 10;
		i--;
	}
	return (str);
}
