/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 06:36:34 by cbester           #+#    #+#             */
/*   Updated: 2018/08/13 11:57:08 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	main(int c, char **v)
{
	t_s		*s;
	size_t	y;

	if (!(s = init(c)))
		return (0);
	if (c > 1)
	{
		y = -1;
		while (++y < s->ssa)
		{
			if (c == 2)
			{
				if (!push_change(&s, v[1], 1, y))
					return (0);
				break ;
			}
			if (c > 2 && !push_change(&s, v[y + 1], 0, y))
				return (0);
		}
		sort_in(&s);
	}
	free_s(s);
	return (0);
}
