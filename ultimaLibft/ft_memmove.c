/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 20:25:26 by epagne-m          #+#    #+#             */
/*   Updated: 2020/02/05 16:50:07 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char	*t_src;
	unsigned char	*t_dst;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	t_src = (unsigned char *)src;
	t_dst = (unsigned char *)dst;
	if (t_src < t_dst)
		while (len--)
			t_dst[len] = t_src[len];
	else
		while (i < len)
		{
			t_dst[i] = t_src[i];
			i++;
		}
	return (dst);
}
