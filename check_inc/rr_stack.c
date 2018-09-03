/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:07:55 by cbester           #+#    #+#             */
/*   Updated: 2018/08/07 10:11:39 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	rr_stack_mini(int *tab)
{
	int	temp;

	temp = tab[0];
	tab[0] = tab[1];
	tab[1] = temp;
}

void		rr_stack(int *tab, size_t ss)
{
	int		temp;
	size_t	i;

	i = 0;
	if (ss <= 1)
		return ;
	if (ss == 2)
	{
		rr_stack_mini(tab);
		return ;
	}
	temp = tab[ss - 1];
	while (i < ss)
	{
		tab[ss - i] = tab[ss - i - 1];
		i++;
	}
	tab[0] = temp;
}
