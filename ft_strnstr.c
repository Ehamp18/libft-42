/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:20:03 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/05 00:28:27 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *hay, const char *need, size_t len)
{
	int		size;
	int		i;

	if (!*hay)
		return (0);
	size = ft_strlen(need);
	if (!*need)
		return ((char*)hay);
	while (*hay++ && len--)
	{
		i = 0;
		while (hay[i] == need[i] && len - i)
		{
			if (i + 1 == size)
				return ((char*)hay);
			i++;
		}
	}
	return (0);
}
