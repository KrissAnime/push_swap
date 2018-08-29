/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:28:35 by cbester           #+#    #+#             */
/*   Updated: 2018/08/13 10:22:31 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	free_s(t_s *s)
{
	free(s->sa);
	free(s->sb);
	free(s);
}

int		validin(char *str)
{
	int		x;
	char	*val;
	int		num;

	x = -1;
	while (str[++x])
	{
		if (!ft_isdigit(str[x]) && x != 0)
			return (0);
	}
	num = ft_atoi(str);
	val = ft_itoa(num);
	if ((!ft_isdigit(str[0]) && str[0] != '-')
			|| ft_strcmp(val, str) != 0)
	{
		free(val);
		return (0);
	}
	free(val);
	return (1);
}
