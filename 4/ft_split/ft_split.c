/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 08:34:23 by nozanne           #+#    #+#             */
/*   Updated: 2017/05/09 08:38:13 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		nbr_words(char *str)
{
	int     len;
	int     check;
	int     i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (str[i - 1] == ' ')
	    len = -1;
	else
	    len = 0;

	i = 0;
	while (str && str[i])
	{
		check = 0;
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
	        i++;
	    while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0' && str[i] != '\n')
	    {
		    i++;
		    check = 1;
		}
		if (check == 1)
			len++;
	}
    return (len);
}

int     skip_space(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
		i++;
	return (i);
}

char    **ft_split(char *str)
{
	int count;
	char    **tab;
	int     i;
	int     j;
	int     k;
	int     len;

	len = nbr_words(str);
	i = 0;
	k = 0;
	tab = (char **)malloc(sizeof(char *) * (len + 1));
	while (str[i] && k < len)
	{
		count = 0;
		i = skip_space(str, i);
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\0' && str[i] != '\n')
		{
			count++;
			i++;
		}
		i = i - count;
		tab[k] = (char *)malloc(sizeof(char) * (count + 1));
		j = 0;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\0' && str[i] != '\n')
		{
			tab[k][j] = str[i];
			j++;
			i++;
		}
		tab[k][j] = '\0';
		k++;
	}
	tab[k] = 0;
	return (tab);
}
