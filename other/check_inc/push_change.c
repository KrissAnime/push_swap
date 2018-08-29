/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_change.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 07:57:20 by cbester           #+#    #+#             */
/*   Updated: 2018/08/10 10:20:20 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void		free_split(char **split, size_t y)
{
	while (y)
	{
		free(split[y]);
		y--;
	}
	free(split);
}

static size_t	split_num(char *str)
{
	size_t	x;
	size_t	i;

	i = 0;
	x = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			x++;
			while (str[i] != ' ' && str[i])
				i++;
		}
		else
			i++;
	}
	return (x);
}

static int		splitter(t_s **s, char *str)
{
	char	**split;
	size_t	x;
	int		num;

	x = -1;
	if (!(split = ft_strsplit(str, ' ')))
		return (0);
	free((*s)->sa);
	if (!((*s)->sa = (int*)malloc(sizeof(int) * split_num(str) + 1)))
		return (0);
	while (split[++x])
	{
		num = ft_atoi(split[x]);
		(*s)->sa[x] = num;
		if (!validin(split[x]) || !ft_dubcheck((*s)->sa, x + 1, num))
		{
			free_split(split, split_num(str));
			ft_putstr("Error\n");
			free_s(*s);
			return (0);
		}
	}
	(*s)->ssa = x;
	free_split(split, x);
	return (1);
}

int				push_change(t_s **s, char *str, int g, size_t y)
{
	int	num;

	if (g == 1)
		return (splitter(s, str));
	num = ft_atoi(str);
	(*s)->sa[y] = num;
	if (!validin(str) || !ft_dubcheck((*s)->sa, y + 1, num))
	{
		ft_putstr("Error\n");
		free_s(*s);
		return (0);
	}
	return (1);
}
