/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 10:21:54 by exam              #+#    #+#             */
/*   Updated: 2017/05/04 16:13:17 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	int_len(int nbr, int x)
{
	if (nbr < 0)
	{
		x++;
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		x++;
		nbr = nbr / 10;
		return (int_len(nbr, x));
	}
	return (x);
}

char *ft_itoa(int nbr)
{
	char *str;
	int i;
	int len;
	int count;

	i = 0;
	count = 1;
	len = int_len(nbr, 1);
	if (len == 1 || (len == 2 && nbr < 0))
		count = 1;
	else if (nbr < 0)
	{
		while (len - 1 > 1)
		{
			count = count * 10;
			len--;
		}
	}
	else
	{
		while (len > 1)
		{
			count = count * 10;
			len--;
		}
	}
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (nbr == -2147483648)
		return ("-2147483648");
	if (nbr < 0)
	{
		nbr = -nbr;
		str[i] = '-';
		i++;
	}
	while (count != 1)
	{
		str[i] = nbr / count + 48;
		nbr = nbr % count;;
		count = count / 10;
		i++;
	}
	str[i] = nbr % 10 + 48;
	i++;
	str[i] = '\0';
	return (str);
}
