/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 23:17:45 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/04 22:23:13 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*sf;

	i = 0;
	if (!s)
		return (0);
	if (!(sf = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i] != '\0')
	{
		sf[i] = f(i, s[i]);
		i++;
	}
	return (sf);
}
