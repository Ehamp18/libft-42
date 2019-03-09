/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:16:08 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/08 16:15:14 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		a;
	int		b;
	int		d;
	int		word;

	if (!s || !c)
		return (0);
	word = ft_wordcount(s, c);
	if (!(arr = (char**)ft_memalloc(sizeof(char*) * (word + 1))))
		return (0);
	b = 0;
	while (word)
	{
		if (s[b] && s[b] != c)
			a = b;
		while (s[b] && s[b++] != c)
			if (s[b] == '\0' || s[b] == c)
			{
				d = b - a;
				if (!(*arr++ = ft_strsub(s, a, d)))
					return (NULL);
				word--;
			}
	}
	return (arr -= ft_wordcount(s, c));
}
