/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 01:19:26 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/12/08 01:29:09 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

int				ft_list_size(t_list *begin_list)
{
	t_list		*tmp;
	int			i;

	i = 0;
	if (begin_list != NULL)
	{
		tmp = begin_list;
		while (tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}
