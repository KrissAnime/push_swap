/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:15:58 by cbester           #+#    #+#             */
/*   Updated: 2018/08/07 13:40:23 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	output(int num)
{
	if (num == PUSH_A)
		ft_putstr("pa\n");
	if (num == PUSH_B)
		ft_putstr("pb\n");
	if (num == SWAP_A)
		ft_putstr("sa\n");
	if (num == SWAP_B)
		ft_putstr("sb\n");
	if (num == SWAP_BOTH)
		ft_putstr("ss\n");
	if (num == ROTATE_A)
		ft_putstr("ra\n");
	if (num == ROTATE_B)
		ft_putstr("rb\n");
	if (num == ROTATE_BOTH)
		ft_putstr("rr\n");
	if (num == REVERSE_A)
		ft_putstr("rra\n");
	if (num == REVERSE_B)
		ft_putstr("rrb\n");
	if (num == REVERSE_BOTH)
		ft_putstr("rrr\n");
}

void		check(int num, t_s **s)
{
	if (num == PUSH_A)
		push_to_a(s);
	if (num == PUSH_B)
		push_to_b(s);
	if (num == SWAP_A)
		swap_a(s);
	if (num == SWAP_B)
		swap_b(s);
	if (num == SWAP_BOTH)
		swap_both(s);
	if (num == ROTATE_A)
		r_stack((*s)->sa, (*s)->ssa);
	if (num == ROTATE_B)
		r_stack((*s)->sb, (*s)->ssb);
	if (num == ROTATE_BOTH)
		r_both(s);
	if (num == REVERSE_A)
		rr_stack((*s)->sa, (*s)->ssa);
	if (num == REVERSE_B)
		rr_stack((*s)->sb, (*s)->ssb);
	if (num == REVERSE_BOTH)
		rr_both(s);
	output(num);
}
