/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_array_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 08:18:13 by cbester           #+#    #+#             */
/*   Updated: 2018/09/04 08:25:26 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_array_int(int *t, char c, size_t s, int fd)
{
	size_t	x;

	x = 0;
	ft_putnbr_fd(t[x++], fd);
	while (x < s)
	{
		ft_putchar_fd(c, fd);
		ft_putnbr_fd(t[x], fd);
		x++;
	}
}
