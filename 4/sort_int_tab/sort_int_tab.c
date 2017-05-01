/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/01 15:46:19 by nozanne           #+#    #+#             */
/*   Updated: 2017/05/01 17:32:41 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int tmp;

	i = 1;
	if (size != 0)
	{
		while (i <= size)
		{
			if (tab[i] < tab[i - 1])
			{
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
				i = 0;
			}
			++i;
		}	
			
	}
}
