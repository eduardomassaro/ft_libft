/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 19:09:10 by epagne-m          #+#    #+#             */
/*   Updated: 2020/02/05 16:32:42 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((char *)src)[i] == (char)c)
		{
			((char*)dest)[i] = ((char *)src)[i];
			return (&((char *)dest)[i + 1]);
		}
		else
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (NULL);
}
