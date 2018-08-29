/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_both.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 09:11:06 by cbester           #+#    #+#             */
/*   Updated: 2018/08/06 13:18:38 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	r_both(t_s **s)
{
	r_stack((*s)->sa, (*s)->ssa);
	r_stack((*s)->sb, (*s)->ssb);
}