/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/09 03:56:17 by nozanne           #+#    #+#             */
/*   Updated: 2017/05/09 05:03:16 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	if (*begin_list)
	{
		if ((cmp((*begin_list)->data, data_ref)) == 0)
		{
			tmp = *begin_list;
			*begin_list = (*begin_list)->next;
			free(tmp);
			ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			ft_list_remove_if(&(*begin_list)->next, data_ref, cmp);
	}
}
