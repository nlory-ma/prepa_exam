/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 03:05:53 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/12/08 03:14:18 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void			ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list		*tmp;

	if (f && begin_list)
	{
		tmp = begin_list;
		while (tmp != NULL)
		{
			(*f)(tmp->data);
			tmp = tmp->next;
		}
	}
}
