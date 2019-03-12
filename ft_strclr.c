/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 21:56:27 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/11 18:15:40 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			*set(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;

	i = -1;
	a = b;
	while (++i < len)
		a[i] = (unsigned char)c;
	return (b);
}

void				ft_strclr(char *s)
{
	if (!s)
		return ;
	while (*s)
		set(s, '\0', ft_strlen(s));
}
