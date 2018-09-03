/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:16:08 by cbester           #+#    #+#             */
/*   Updated: 2018/09/03 13:50:10 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	max_min(t_s **s)
{
	size_t	x;

	x = 0;
	(*s)->mxn = -2147483648;
	(*s)->mnn = 2147483647;
	while (x < (*s)->ssa)
	{
		if ((*s)->sa[x] > (*s)->mxn)
		{
			(*s)->mxn = (*s)->sa[x];
			(*s)->mxp = x;
		}
		if ((*s)->sa[x] < (*s)->mnn)
		{
			(*s)->mnn = (*s)->sa[x];
			(*s)->mnp = x;
		}
		x++;
	}
}

void		simple_sort(t_s **s)
{
	int	num;

	while (1)
	{
		num = check_stack(s);
		max_min(s);
	}
}
