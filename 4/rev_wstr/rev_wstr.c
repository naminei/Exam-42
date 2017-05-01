/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 13:41:44 by nozanne           #+#    #+#             */
/*   Updated: 2017/04/25 15:05:25 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writeword(char *str)
{
	while (*str && *str != ' ' && *str != '\t')
	{
		write(1, str, 1);
		str++;
	}
}

int 	main(int ac, char **av)
{
	int i;
	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
			i++;
		i--;
		while (av[1][i] && i > 0)
		{
			while (av[1][i] != 32 && av[1][i] != '\t' && i > 0)
				i--;
			if (i == 0)
				writeword(av[1]);
			else
				writeword(av[1] + i + 1);
			if (i > 0)
				write(1, " ", 1);
			while ((av[1][i] == ' ' || av[1][i] == '\t') && i > 0)
				i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
