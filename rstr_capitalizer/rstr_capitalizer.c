/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlory-ma <>                                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 23:17:35 by nlory-ma          #+#    #+#             */
/*   Updated: 2015/12/08 01:11:08 by nlory-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int				ft_strlen(char *s)
{
	int			i;

	i = 0;
	if (s)
	{
		while (s[i])
			i++;
	}
	return (i);
}

int				ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32) || (c == '\0'))
		return (1);
	else
		return (0);
}

int				ft_is_capitalise(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

void			rstr_capitalize(char *s)
{
	int			i;
	int			len;

	i = 0;
	len = ft_strlen(s) - 1;
	while (s[i] != '\0')
	{
		if (((!(ft_isspace(s[i]))) && (ft_isspace(s[i + 1]))) || (i == len))
		{
			if (!ft_is_capitalise(s[i]))
				s[i] = s[i] - 32;
		}
		write(1, &s[i], 1);
		i++;
	}
}








int				main(int ac, char **av)
{
	int			i;
	if (ac == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i <= ac)
	{
		rstr_capitalize(av[i]);
		i++;
	}
	return (0);
}
