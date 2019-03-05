/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 17:16:36 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/04 22:16:15 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	size_t		sta;
	size_t		end;
	char		*string;

	if (!s)
		return (0);
	sta = 0;
	end = (ft_strlen(s) - 1);
	if (!(string = (char*)malloc(sizeof(end))))
		return (0);
	ft_strcpy(string, s);
	while (string[sta] == ' ' || string[sta] == '\t' || string[sta] == '\n')
		sta++;
	while (string[end] == ' ' || string[end] == '\t' || string[end] == '\n')
		end--;
	string[end + 1] = '\0';
	return (string + sta);
}
