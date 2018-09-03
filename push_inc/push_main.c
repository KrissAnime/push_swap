/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 06:36:34 by cbester           #+#    #+#             */
/*   Updated: 2018/09/03 13:34:28 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int			main(int c, char **v)
{
	t_s		*s;

	if (c > 1 && c < 7)
	{
		s = init(c);
		if(!valid(&s, v))
		{
			free_s(&s);
			ft_putendl_fd("Error", 2);
			exit(0);
		}
		simple_sort(&s);
		free_s(&s);
	}
	return (0);
}
