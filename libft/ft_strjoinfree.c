/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 10:22:34 by cbester           #+#    #+#             */
/*   Updated: 2018/09/03 13:18:33 by cbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinfree(char *s1, char const *s2)
{
	char *str;

	if (s1 == NULL || s2 == NULL)
		return (0);
	if (!(str = (char*)malloc(((ft_strlen(s1) + ft_strlen((char*)s2) + 1)))))
		return (NULL);
	str[0] = '\0';
	ft_strcat(str, s1);
	ft_strcat(str, (char*)s2);
	ft_strdel(&s1);
	return (str);
}
