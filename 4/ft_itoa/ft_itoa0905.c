/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 10:07:41 by exam              #+#    #+#             */
/*   Updated: 2017/05/30 12:23:06 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		lenw(int nbr)
{
	int len;

	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	while (nbr / 10 > 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}	
		
char	*ft_itoa(int nbr)
{
	int len;
	char *x;
	int i;
	int count;
	
	i = 0;
	count = 1;
	len = lenw(nbr);
	if (!(x = (char*)malloc(sizeof(char)*(len + 1))))
		return (NULL);
	if (nbr < 0)
	{
		if (nbr == -2147483648)
		{
			x = "-2147483648";
			return (x);
		}
		len--;
		x[0] = '-';
		i++;
		nbr = -nbr;
	}
	if (len == 1)
	{
		x[i] = 48 + nbr;
		return (x);
	}
	while (len > 1)
	{
		count = count * 10;
		len--;
	}
	while (nbr > 9)
	{
		x[i] = 48 + nbr / count;
		i++;
		nbr = nbr % count;
		count = count / 10;
	}
	if (nbr <= 9)
	{
		x[i] = 48 + nbr;
		i++;
	}
	x[i] = '\0';
	return (x);
}
