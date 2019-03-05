/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 20:50:48 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/03 23:05:17 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*st;

	st = (unsigned char*)s;
	a = (unsigned char)c;
	while (*st && *st != a && n--)
	{
		++st;
		if (*st == a)
			return (st);
	}
	return (0);
}
