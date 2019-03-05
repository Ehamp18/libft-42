/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elhampto <elhampto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 10:36:07 by elhampto          #+#    #+#             */
/*   Updated: 2019/03/02 06:03:23 by elhampto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*sf;

	if (!(sf = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	while (lst != '\0')
	{
		sf = f(lst);
		lst = lst->next;
		sf++;
	}
	return (sf);
}
