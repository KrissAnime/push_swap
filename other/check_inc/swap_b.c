/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 11:13:51 by cbester           #+#    #+#             */
/*   Updated: 2018/08/07 14:09:54 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	swap_b(t_s **s)
{
	int	temp;

	if ((*s)->ssb > 1)
	{
		temp = (*s)->sb[0];
		(*s)->sb[0] = (*s)->sb[1];
		(*s)->sb[1] = temp;
	}
}
