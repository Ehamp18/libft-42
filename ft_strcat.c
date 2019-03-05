/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 16:29:58 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/03 22:46:46 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		o;

	o = 0;
	i = 0;
	while (s1[i])
		i++;
	while (s2[o] != '\0')
	{
		s1[i + o] = s2[o];
		o++;
	}
	s1[i + o] = '\0';
	return (s1);
}
