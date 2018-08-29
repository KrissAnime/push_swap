/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 12:47:42 by cbester           #+#    #+#             */
/*   Updated: 2018/08/13 11:19:53 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	test(t_s *s)
{
	size_t	x;

	x = -1;
	while (++x < s->ssa || x < s->ssb)
	{
		if (x < s->ssa)
			ft_putnbr_fd(s->sa[x], 2);
		ft_putstr_fd("\t", 2);
		if (x < s->ssb)
			ft_putnbr_fd(s->sb[x], 2);
		ft_putchar_fd('\n', 2);
	}
	ft_putstr_fd("_\t_", 2);
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("a\tb", 2);
	ft_putchar_fd('\n', 2);
	ft_putstr_fd("---------", 2);
	ft_putchar_fd('\n', 2);
}
