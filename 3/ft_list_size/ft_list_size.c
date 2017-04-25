/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/24 21:17:29 by nozanne           #+#    #+#             */
/*   Updated: 2017/04/24 21:23:32 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int i;

	if (begin_list)
	{
		i = 1;
		while (begin_list->next)
		{
			begin_list = begin_list->next;
			i++;
		}
		return (i);
	}
	return (0);
}
