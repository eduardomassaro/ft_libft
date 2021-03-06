/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:50:39 by epagne-m          #+#    #+#             */
/*   Updated: 2020/01/30 18:30:10 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	if (len >= 0)
	{
		while (len--)
		{
			*(unsigned char *)(b + len) = (unsigned char)(c);
		}
	}
	return (b);
}
