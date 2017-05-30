/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 10:05:25 by exam              #+#    #+#             */
/*   Updated: 2017/05/30 12:18:29 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ifpriime(int a, int b)
{
	static int c = 1;
	int i;

	i = 2;
	if (a == 1)
		return (1);
	while (a % i != 0)
		i++;
	if (i != a)
	{
		c = c * i;
		printf("%i*", i);
		ifpriime(a/i, b);
	}
	return (b / c);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		printf("%i\n", ifpriime(atoi(av[1]), atoi(av[1])));
	else
		printf("\n");
	return (0);
}
