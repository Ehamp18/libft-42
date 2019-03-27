/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 09:41:51 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/18 10:18:43 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	void			*fresh;

	if (!size)
		return (NULL);
	if (!(fresh = malloc(size)))
		return (NULL);
	ft_memset(fresh, 0, size);
	return (fresh);
}
