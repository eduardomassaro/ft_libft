/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 06:51:05 by epagne-m          #+#    #+#             */
/*   Updated: 2020/02/07 16:24:04 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*onde;
	char	*oq;

	onde = (char *)haystack;
	oq = (char *)needle;
	i = 0;
	if (ft_strlen(oq) == 0)
		return (&onde[0]);
	while (i != len && onde[i] != '\0')
	{
		j = 0;
		while (onde[i + j] == oq[j] && oq[j] != '\0' && (i + j) != len)
			j++;
		if (oq[j] == '\0')
			return ((char *)&onde[i]);
		i++;
	}
	return (0);
}
