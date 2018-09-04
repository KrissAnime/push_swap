/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 06:38:06 by cbester           #+#    #+#             */
/*   Updated: 2018/09/04 08:40:17 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static size_t	last(t_s **s, char **temp)
{
	size_t	x;
	size_t	num;
	char	*hold;

	x = 0;
	while (x < (*s)->ssa)
	{
		num = ft_atoi(temp[x]);
		hold = ft_itoa(num);
		if (!ft_strequ(temp[x], hold))
		{
			free(hold);
			free_array(temp, ft_array_size(temp));
			return (0);
		}
		(*s)->sa[x] = num;
		ft_strdel(&hold);
		x++;
	}
	free_array(temp, ft_array_size(temp));
	return (1);
}

static size_t	beforelast(t_s **s, char *t)
{
	char	**temp;
	size_t	x;
	size_t	y;

	if (!(temp = ft_strsplit(t, ' ')))
		return (0);
	if (ft_strequ(temp[0], ""))
		return (0);
	x = 0;
	while (temp[x])
	{
		y = x + 1;
		while (temp[y])
		{
			if (ft_strequ(temp[x], temp[y]))
			{
				free(t);
				free_array(temp, ft_array_size(temp));
				return (0);
			}
			y++;
		}
		x++;
	}
	free(t);
	return (last(s, temp));
}

size_t	valid(t_s **s, char **v)
{
	size_t	x;
	char	*temp;

	x = 1;
	temp = ft_strdup(v[x]);
	x++;
	while (v[x])
	{
		temp = ft_strjoinfree(temp, " ");
		temp = ft_strjoinfree(temp, v[x]);
		x++;
	}
	return (beforelast(s, temp));
}

static int	*placement(int c)
{
	int	*tab;
	int	x;

	if (!(tab = (int*)malloc(sizeof(int) * c)))
		exit(0);
	x = 0;
	while (x < c)
	{
		tab[x] = 0;
		x++;
	}
	return (tab);
}

t_s	*init(int c)
{
	t_s	*s;

	s = (t_s*)malloc(sizeof(t_s));
	s->ssa = c - 1;
	s->ssb = 0;
	s->sa = placement(s->ssa);
	s->sb = placement(s->ssa);
	return (s);
}
