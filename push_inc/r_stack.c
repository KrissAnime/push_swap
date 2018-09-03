/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_stack.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 06:58:02 by cbester           #+#    #+#             */
/*   Updated: 2018/07/31 11:32:20 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	r_stack_mini(int *tab)
{
	int	temp;

	temp = tab[0];
	tab[0] = tab[1];
	tab[1] = temp;
}

void		r_stack(int *tab, size_t ss)
{
	int		temp;
	size_t	i;

	i = 0;
	if (ss <= 1)
		return ;
	if (ss == 2)
	{
		r_stack_mini(tab);
		return ;
	}
	temp = tab[0];
	while (i < ss)
	{
		tab[i] = tab[i + 1];
		i++;
	}
	tab[i] = tab[i + 1];
	tab[ss - 1] = temp;
}
