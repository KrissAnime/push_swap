/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:15:58 by cbester           #+#    #+#             */
/*   Updated: 2018/08/13 13:22:27 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int	first_state(t_s *s)
{
	size_t	x;

	if (s->ssb != 0)
		return (0);
	x = -1;
	while (++x < s->ssa)
	{
		if (x + 1 == s->ssa)
			break ;
		if (s->sa[x] > s->sa[x + 1])
			return (0);
	}
	ft_putstr("OK\n");
	return (1);
}

static void	check_state(t_s *s)
{
	size_t	x;

	if (s->ssb != 0)
	{
		ft_putstr("KO\n");
		return ;
	}
	x = -1;
	while (++x < s->ssa)
	{
		if (x + 1 == s->ssa)
			break ;
		if (s->sa[x] > s->sa[x + 1])
		{
			ft_putstr("KO\n");
			return ;
		}
	}
	ft_putstr("OK\n");
	return ;
}

static void	mod(t_s **s, char *line)
{
	if (ft_strcmp(line, "pa") == 0)
		push_to_a(s);
	if (ft_strcmp(line, "pb") == 0)
		push_to_b(s);
	if (ft_strcmp(line, "sa") == 0)
		swap_a(s);
	if (ft_strcmp(line, "sb") == 0)
		swap_b(s);
	if (ft_strcmp(line, "ss") == 0)
		swap_both(s);
	if (ft_strcmp(line, "ra") == 0)
		r_stack((*s)->sa, (*s)->ssa);
	if (ft_strcmp(line, "rb") == 0)
		r_stack((*s)->sb, (*s)->ssb);
	if (ft_strcmp(line, "rr") == 0)
		r_both(s);
	if (ft_strcmp(line, "rra") == 0)
		rr_stack((*s)->sa, (*s)->ssa);
	if (ft_strcmp(line, "rrb") == 0)
		rr_stack((*s)->sb, (*s)->ssb);
	if (ft_strcmp(line, "rrr") == 0)
		rr_both(s);
}

void		sort_in(t_s **s)
{
	char	*line;
	int		x;
	int		i;

	if (first_state(*s))
		return ;
	line = NULL;
	x = 0;
	i = 0;
	while (get_next_line(0, &line))
	{
		test(*s);
		fprintf(stderr, "\n%s\n", line);
		if (x == 0)
		{
			x++;
			mod(s, line + shift(line, *s));
		}
		else
			mod(s, line);
	}
//	free(line);
	check_state(*s);
	test(*s);
}
