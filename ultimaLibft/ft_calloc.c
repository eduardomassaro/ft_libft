/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 14:43:28 by epagne-m          #+#    #+#             */
/*   Updated: 2020/02/15 19:45:05 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem_total;
	size_t	i;
	size_t	len;

	mem_total = malloc(count * size);
	if (mem_total == 0)
		return (NULL);
	i = 0;
	len = count * size;
	while (len > 0)
	{
		((char*)mem_total)[i] = '\0';
		i++;
		len--;
	}
	return (mem_total);
}
