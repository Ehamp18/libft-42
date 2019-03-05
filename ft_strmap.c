/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 22:47:51 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/04 22:21:33 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
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
		sf[i] = f(s[i]);
		i++;
	}
	return (sf);
}
