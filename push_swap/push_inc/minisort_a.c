/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 08:29:49 by cbester           #+#    #+#             */
/*   Updated: 2018/08/07 13:23:28 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	minisort_a(int *tab, size_t ss, t_s **s)
{
	if (ss == 1)
		return ;
	if (ss == 2)
	{
		if (tab[0] > tab[1])
			check(SWAP_A, s);
		return ;
	}
	if (tab[0] > tab[1] && tab[0] < tab[2])
		check(SWAP_A, s);
	if (tab[1] > tab[0] && tab[1] > tab[2])
		check(REVERSE_A, s);
	if (tab[0] > tab[1] && tab[0] > tab[2])
		check(ROTATE_A, s);
}
