/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 08:45:40 by nozanne           #+#    #+#             */
/*   Updated: 2017/05/09 08:53:38 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	int i;
	int nbr;

	if (ac == 2)
	{
		nbr = atoi(av[1]);
		if (nbr == 1)
		{
			printf("1\n");
			return (0);
		}
		while (1)
		{
			i = 2;
			while (i <= nbr)
			{
				if (nbr % i == 0)
				{
					printf ("%d", i);
					nbr = nbr / i;
					break ;
				}
				i++;
			}
			if (nbr == 1)
				break ;
			else
				printf("*");
		}
	}
	printf("\n");
	return (0);
}
