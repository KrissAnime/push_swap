/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:15:58 by cbester           #+#    #+#             */
/*   Updated: 2018/09/04 06:47:43 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void	check_state(t_s *s)
{
	size_t	x;

	if (s->ssb != 0)
	{
		ft_putendl("KO\n");
		return ;
	}
	x = -1;
	while (++x < s->ssa)
	{
		if (x + 1 == s->ssa)
			break ;
		if (s->sa[x] > s->sa[x + 1])
		{
			ft_putendl("KO\n");
			return ;
		}
	}
	ft_putendl("OK\n");
}

static int	mod(t_s **s, char *line)
{
	if (ft_strcmp(line, "pa") == 0)
		push_to_a(s);
	else if (ft_strcmp(line, "pb") == 0)
		push_to_b(s);
	else if (ft_strcmp(line, "sa") == 0)
		swap_a(s);
	else if (ft_strcmp(line, "sb") == 0)
		swap_b(s);
	else if (ft_strcmp(line, "ss") == 0)
		swap_both(s);
	else if (ft_strcmp(line, "ra") == 0)
		r_stack((*s)->sa, (*s)->ssa);
	else if (ft_strcmp(line, "rb") == 0)
		r_stack((*s)->sb, (*s)->ssb);
	else if (ft_strcmp(line, "rr") == 0)
		r_both(s);
	else if (ft_strcmp(line, "rra") == 0)
		rr_stack((*s)->sa, (*s)->ssa);
	else if (ft_strcmp(line, "rrb") == 0)
		rr_stack((*s)->sb, (*s)->ssb);
	else if (ft_strcmp(line, "rrr") == 0)
		rr_both(s);
	else
		return (0);
	return (1);
}

void		sort_in(t_s **s)
{
	char	*line;
	int		x;

	line = NULL;
	x = 0;
	while (get_next_line(0, &line))
	{
		if (!mod(s, line))
		{
			free(line);
			ft_putendl_fd("Error", 2);
			return ;
		}
		ft_strdel(&line);
	}
	free(line);
	check_state(*s);
}
