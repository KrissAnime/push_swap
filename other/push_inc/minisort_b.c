/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 08:29:49 by cbester           #+#    #+#             */
/*   Updated: 2018/08/13 13:18:45 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static size_t	minib(int *tab)
{
	size_t	x;

	x = 0;
	while (x < 3)
	{
		if (x + 1 == 3)
			break ;
		if (tab[x] > tab[x + 1])
			return (0);
		x++;
	}
	return (1);
}

void			minisort_b(int *tab, size_t ss, t_s **s)
{
	if (ss == 1)
		return ;
	if (ss == 2)
	{
		if (tab[0] < tab[1])
			check(SWAP_B, s);
		return ;
	}
	while (minib(tab) == 0)
	{
		if (tab[0] < tab[1] && tab[0] > tab[2])
			check(SWAP_B, s);
		if (tab[1] < tab[0] && tab[1] < tab[2])
			check(REVERSE_B, s);
		if (tab[0] < tab[1] && tab[0] < tab[2])
			check(ROTATE_B, s);
	}
}
