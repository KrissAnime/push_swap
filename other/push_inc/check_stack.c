/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:23:58 by cbester           #+#    #+#             */
/*   Updated: 2018/08/13 10:03:24 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	check_a(t_s *s)
{
	size_t	x;

	if (s->ssa <= 1)
		return (SORTED);
	x = -1;
	while (++x < s->ssa)
	{
		if (x + 1 == s->ssa)
			break ;
		if (s->sa[x] > s->sa[x + 1])
			return (FAILED);
	}
	return (SORTED);
}

static int	check_b(t_s *s)
{
	size_t	x;

	if (s->ssb <= 1)
		return (SORTED);
	x = -1;
	while (++x < s->ssb)
	{
		if (x + 1 == s->ssb)
			break ;
		if (s->sb[x] < s->sb[x + 1])
			return (FAILED);
	}
	return (SORTED);
}

int			check_stack(t_s **s)
{
	int	a;
	int	b;

	a = check_a(*s);
	b = check_b(*s);
	if (a == FAILED && b == FAILED)
		return (FAILED);
	if (a == SORTED && b == SORTED)
		return (TRY);
	return (FAILED);
}
