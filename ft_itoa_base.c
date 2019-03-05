/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 20:01:13 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/04 21:33:32 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa_base(int n, int base)
{
	static char *index = "0123456789abcdef";
	int			len;
	int			a;
	char		*asc;

	a = n;
	len = 0;
	while (a)
	{
		len++;
		a /= base;
	}
	len = n < 0 ? len + 1 : len;
	if (!(asc = (char*)ft_memalloc(sizeof(char) * (len + 1))))
		return (0);
	a = n;
	while (a)
	{
		asc[--len] = index[a % base];
		a /= base;
	}
	n < 0 && base == 10 ? asc[len] = '-' : 0;
	return (asc);
}
