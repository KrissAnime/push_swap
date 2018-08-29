/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 06:38:06 by cbester           #+#    #+#             */
/*   Updated: 2018/08/07 13:04:39 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

t_s	*init(int c)
{
	t_s	*s;

	s = (t_s*)malloc(sizeof(t_s));
	s->ssa = c - 1;
	s->ssb = 0;
	s->sa = (int*)malloc(sizeof(int) * s->ssa + 1);
	s->sb = (int*)malloc(sizeof(int) * s->ssa);
	return (s);
}
