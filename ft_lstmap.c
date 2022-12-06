/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antdelga <antdelga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:55:15 by antdelga          #+#    #+#             */
/*   Updated: 2022/12/06 20:34:27 by antdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*final;
	t_list	*aux;

	if (!lst)
		return (NULL);
	final = NULL;
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (aux == NULL)
		{
			ft_lstclear(&final, del);
			return (NULL);
		}
		ft_lstadd_back(&final, aux);
		lst = lst->next;
	}
	return (final);
}
