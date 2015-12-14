/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 19:52:52 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/12/14 20:27:34 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_list			*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list			*tmp;
	int			limit;

	if (!lst || !cmp)
		return (NULL);
	tmp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			limit = lst->data;
			lst->data = lst->next->data;
			lst->next->data = limit;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

