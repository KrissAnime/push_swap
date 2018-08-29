/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 06:38:06 by cbester           #+#    #+#             */
/*   Updated: 2018/08/13 13:23:30 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

t_s	*init(int c)
{
	t_s	*s;

	if (!(s = (t_s*)malloc(sizeof(t_s))))
		return (NULL);
	s->ssa = c - 1;
	s->ssb = 0;
	if (!(s->sa = (int*)malloc(sizeof(int) * s->ssa)))
		return (NULL);
	if (!(s->sb = (int*)malloc(sizeof(int) * s->ssa)))
		return (NULL);
	return (s);
}
