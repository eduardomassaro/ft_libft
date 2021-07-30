/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 15:55:47 by epagne-m          #+#    #+#             */
/*   Updated: 2020/02/20 15:49:38 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *n_elmnt;

	if (!(n_elmnt = malloc(sizeof(t_list))))
		return (NULL);
	n_elmnt->content = content;
	n_elmnt->next = NULL;
	return (n_elmnt);
}
