/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:16:08 by cbester           #+#    #+#             */
/*   Updated: 2018/09/05 11:50:52 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	minisort(int *tab, size_t ss, t_s **s)
{
	if (ss == 1)
		return ;
	if (ss == 2)
	{
		if (tab[0] > tab[1])
			check(SWAP_A, s);
		return ;
	}
	if (tab[1] > tab[0] && tab[1] > tab[2])
		check(REVERSE_A, s);
	if (tab[0] > tab[1] && tab[0] > tab[2])
		check(ROTATE_A, s);
	if (tab[0] > tab[1] && tab[0] < tab[2])
		check(SWAP_A, s);
}

static void	sort(t_s **s)
{
	if ((*s)->ssa <= 3)
	{
		minisort((*s)->sa, (*s)->ssa, s);
		while ((*s)->ssb)
			check(PUSH_A, s);
		return ;
	}
	else
	{
		if ((*s)->mnp == 0)
		{
			check(PUSH_B, s);
			return ;
		}
	}
	if ((*s)->mnp <= (*s)->ssa / 2)
		check(ROTATE_A, s);
	else
		check(REVERSE_A, s);
}

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
		if (num == SORTED)
			break ;
		max_min(s);
		sort(s);
	}
}
