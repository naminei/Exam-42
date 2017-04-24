/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 15:45:05 by nozanne           #+#    #+#             */
/*   Updated: 2017/04/24 17:16:18 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int comp(int a, int b)
{
	int c;
	c = a;
	while (c > 0)
	{
		if (b % c == 0 && a % c == 0)
			return(c);
		c--;
	}
	return(0);
}

int	main(int ac, char **av)
{
	int a;
	int b;
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		if (a < b)
			printf("%i", comp(a, b));
		if (b < a)
			printf("%i", comp(b, a));
		if (a == b)
			printf("%s", av[1]);
	}
	printf("\n");
	return (0);
}
