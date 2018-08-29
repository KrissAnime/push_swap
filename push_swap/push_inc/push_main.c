/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 06:36:34 by cbester           #+#    #+#             */
/*   Updated: 2018/08/07 14:09:19 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	the_end(t_s *s)
{
	ft_putstr("Error\n");
	free_s(s);
	return (0);
}

int			main(int c, char **v)
{
	t_s		*s;
	size_t	x;
	int		num;

	if (c > 1)
	{
		x = -1;
		s = init(c);
		while (++x < s->ssa)
		{
			num = ft_atoi(v[x + 1]);
			s->sa[x] = num;
			if (!validin(v[x + 1]) || !ft_dubcheck(s->sa, x + 1, num))
				return (the_end(s));
		}
		if (s->ssa >= 1 && s->ssa <= 3)
			minisort_a(s->sa, s->ssa, &s);
		simple_sort(&s);
	}
	return (0);
}
