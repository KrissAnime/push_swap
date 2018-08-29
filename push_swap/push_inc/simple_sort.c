/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:16:08 by cbester           #+#    #+#             */
/*   Updated: 2018/08/07 14:10:29 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	sort_b(t_s **s)
{
	if ((*s)->ssb > 3)
	{
		if ((*s)->sb[0] > (*s)->sb[(*s)->ssb - 1] && (*s)->sb[0] < (*s)->sb[1])
			return (SWAP_B);
		if ((*s)->sb[0] < (*s)->sb[(*s)->ssb - 1])
			return (ROTATE_B);
		if ((*s)->sb[(*s)->ssb - 2] < (*s)->sb[(*s)->ssb - 1]
				&& (*s)->sb[(*s)->ssb - 2] < (*s)->sb[0])
			return (REVERSE_B);
	}
	if ((*s)->ssb >= 1 && (*s)->ssb <= 3)
		minisort_b((*s)->sb, (*s)->ssb, s);
	return (1);
}

static int	sort_a(t_s **s)
{
	if ((*s)->ssa > 3)
	{
		if ((*s)->sa[0] < (*s)->sa[(*s)->ssa - 1] && (*s)->sa[0] > (*s)->sa[1])
			return (SWAP_A);
		if ((*s)->sa[0] > (*s)->sa[(*s)->ssa - 1])
			return (ROTATE_A);
		if ((*s)->sa[(*s)->ssa - 2] > (*s)->sa[(*s)->ssa - 1]
				&& (*s)->sa[(*s)->ssa - 2] > (*s)->sa[0])
			return (REVERSE_A);
	}
	if ((*s)->ssa >= 1 && (*s)->ssa <= 3)
		minisort_a((*s)->sa, (*s)->ssa, s);
	return (1);
}

static void	twins(int a, int b, t_s **s)
{
	if (a == SWAP_A && b == SWAP_B)
		check(SWAP_BOTH, s);
	else if (a == ROTATE_A && b == ROTATE_B)
		check(ROTATE_BOTH, s);
	else if (a == REVERSE_A && b == REVERSE_B)
		check(REVERSE_BOTH, s);
	else
	{
		check(a, s);
		check(b, s);
	}
}

size_t		mona(t_s **s)
{
	size_t	x;

	x = -1;
	while (++x < (*s)->ssa)
	{
		if (x + 1 == (*s)->ssa)
			break ;
		if ((*s)->sa[x] > (*s)->sa[x + 1])
			return (1);
	}
	return (0);
}

void		simple_sort(t_s **s)
{
	int	num;
	int	a;
	int	b;

	while (1)
	{
		num = check_stack(s);
		a = sort_a(s);
		b = sort_b(s);
		if (num == TRY && (*s)->ssb == 0)
			break ;
		if (num == FAILED)
			twins(a, b, s);
		if ((num == TRY && (*s)->ssb != 0))
			check(PUSH_A, s);
		else if (mona(s))
			check(PUSH_B, s);
	}
}
