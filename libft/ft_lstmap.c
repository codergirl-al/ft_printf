/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:44:53 by apeposhi          #+#    #+#             */
/*   Updated: 2022/11/27 17:24:27 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst -> content));
		if (new == NULL)
		{
			while (first)
			{
				new = first -> next;
				(*del)(first -> content);
				free(first);
				first = new;
			}
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
