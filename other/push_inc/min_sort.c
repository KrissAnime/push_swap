/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 06:50:08 by cbester           #+#    #+#             */
/*   Updated: 2018/08/13 13:33:30 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	shift_cycle(t_s **s)
{
	if ((*s)->pos > (*s)->ssa / 2)
	{
		while ((*s)->sa[0] != (*s)->min)
			check(REVERSE_A, s);
//		while ((*s)->sa[0] != (*s)->min)
//			check(ROTATE_A, s);
		if ((*s)->sa[(*s)->ssa - 1] == (*s)->min)
		{
			check(REVERSE_A, s);
			check(PUSH_B, s);
		}
		else if ((*s)->sa[0] == (*s)->min)
			check(PUSH_B, s);
	}
	if ((*s)->pos <= (*s)->ssa / 2)
	{
		while ((*s)->sa[0] != (*s)->min)
			check(ROTATE_A, s);
		if ((*s)->sa[1] == (*s)->min)
		{
			check(SWAP_A, s);
			check(PUSH_B, s);
		}
		else if ((*s)->sa[0] == (*s)->min)
			check(PUSH_B, s);
	}
}

static void	stack_cycle(t_s **s)
{
	size_t	i;

	i = 0;
	(*s)->min = 2147483647;
	while (i < (*s)->ssa)
	{
		if ((*s)->sa[i] <= (*s)->min)
		{
			(*s)->min = (*s)->sa[i];
			(*s)->pos = i;
		}
		i++;
	}
	shift_cycle(s);
}

void		min_sort(t_s **s)
{
	int	num;

	while (1)
	{
		(*s)->pos = 0;
		num = check_stack(s);
		if (num == TRY && (*s)->ssb == 0)
			break ;
		if ((*s)->ssa <= 3)
		{
			minisort_a((*s)->sa, (*s)->ssa, s);
			while ((*s)->ssb)
				check(PUSH_A, s);
			break ;
		}
		else
			stack_cycle(s);
		//sleep(1);
	}
}
