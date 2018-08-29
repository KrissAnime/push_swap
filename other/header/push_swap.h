/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 11:17:10 by cbester           #+#    #+#             */
/*   Updated: 2018/08/13 06:58:37 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

enum	e_strat
{
	FAILED = 0,
	SORTED = 1,
	SWAP_A = 2,
	SWAP_B = 3,
	SWAP_BOTH = 4,
	ROTATE_A = 5,
	ROTATE_B = 6,
	ROTATE_BOTH = 7,
	REVERSE_A = 8,
	REVERSE_B = 9,
	REVERSE_BOTH = 10,
	PUSH_A = 11,
	PUSH_B = 12,
	TRY = 13,
};

typedef struct	s_s
{
	size_t		ssa;
	size_t		ssb;
	size_t		pos;
	int			*sa;
	int			*sb;
	int			min;
}				t_s;

void			test(t_s *s);

t_s				*init(int c);

int				validin(char *str);
int				check_stack(t_s **s);
int				push_change(t_s **s, char *str, int g, size_t y);

size_t			shift(char *line, t_s *s);

size_t			mona(t_s **s);
size_t			monb(t_s **s);

void			min_sort(t_s **s);

void			simple_sort(t_s **s);
void			check(int num, t_s **s);

void			minisort_a(int *tab, size_t ss, t_s **s);
void			minisort_b(int *tab, size_t ss, t_s **s);

void			sort_in(t_s **s);
void			free_s(t_s *s);

void			swap_a(t_s **s);
void			swap_b(t_s **s);
void			swap_both(t_s **s);

void			r_stack(int *tab, size_t ss);
void			r_both(t_s **s);

void			rr_stack(int *tab, size_t ss);
void			rr_both(t_s **s);

void			push_to_a(t_s **s);
void			push_to_b(t_s **s);

#endif
