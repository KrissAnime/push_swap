/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 06:36:34 by cbester           #+#    #+#             */
/*   Updated: 2018/08/13 10:22:47 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	solve(t_s **s)
{
	if ((*s)->ssa <= 3)
		minisort_a((*s)->sa, (*s)->ssa, s);
	if ((*s)->ssa > 3 && (*s)->ssa < 10)
		simple_sort(s);
	else
		min_sort(s);
}

int			main(int c, char **v)
{
	t_s		*s;
	size_t	x;

	if (!(s = init(c)))
		return (0);
	if (c > 1)
	{
		x = -1;
		if (!s)
			return (0);
		while (++x < s->ssa)
		{
			if (c == 2)
			{
				if (!push_change(&s, v[1], 1, x))
					return (0);
			}
			else if (c > 2 && !push_change(&s, v[x + 1], 0, x))
				return (0);
		}
		solve(&s);
	}
	free_s(s);
	return (0);
}
