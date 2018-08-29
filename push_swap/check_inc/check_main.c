/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 06:36:34 by cbester           #+#    #+#             */
/*   Updated: 2018/08/07 10:51:15 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	main(int c, char **v)
{
	t_s		*s;
	size_t	y;
	int		num;

	if (c > 1)
	{
		y = -1;
		s = init(c);
		while (++y < s->ssa)
		{
			num = ft_atoi(v[y + 1]);
			s->sa[y] = num;
			if (!validin(v[y + 1]) || !ft_dubcheck(s->sa, y + 1, num))
			{
				ft_putstr("Error\n");
				free_s(s);
				return (0);
			}
		}
		sort_in(&s);
	}
	return (0);
}
