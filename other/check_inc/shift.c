/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 06:46:01 by cbester           #+#    #+#             */
/*   Updated: 2018/08/07 09:54:49 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

size_t	shift(char *line, t_s *s)
{
	char	*temp;

	temp = ft_itoa(s->sa[s->ssa - 1]);
	if (ft_strstr(line, temp) != NULL)
	{
		free(temp);
		return (ft_numlen(s->sa[s->ssa - 1]));
	}
	free(temp);
	return (0);
}
