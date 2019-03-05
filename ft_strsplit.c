/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:16:08 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/04 23:07:38 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	char	*help;
	int		trip[4];

	trip[1] = 0;
	help = ft_strnew(ft_strlen(s));
	ft_strcpy(help, s);
	trip[2] = 0;
	if (!*help || !(arr = (char**)ft_memalloc(sizeof(char*) *
			(ft_wordcount(help, c) + 1))) || !c)
		return (0);
	while (help[trip[2]])
	{
		while (help[trip[2]] == c)
			trip[2]++;
		trip[1] = trip[2];
		while (help[trip[2]++] != c && help[trip[2]])
			if (help[trip[2]] == c && (trip[3] = trip[2] - trip[1]) > -1)
			{
				if (!(*arr = ft_strnew(trip[3])))
					return (NULL);
				ft_strncpy(*arr++, help + trip[1], trip[3]);
			}
	}
	return (arr - ft_wordcount(s, c));
}
