/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 19:00:32 by epagne-m          #+#    #+#             */
/*   Updated: 2020/02/18 19:00:37 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nelem;

	nlist = NULL;
	while (lst)
	{
		if (!(nelem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&nlist, del);
			return (nlist);
		}
		ft_lstadd_back(&nlist, nelem);
		lst = lst->next;
	}
	return (nlist);
}
