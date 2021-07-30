/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 22:16:33 by epagne-m          #+#    #+#             */
/*   Updated: 2020/02/06 17:37:29 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	char	*s_cpy;

	s1_len = ft_strlen(s1);
	if ((s_cpy = malloc((sizeof(char) * s1_len) + 1)) == 0)
		return (0);
	ft_memcpy(s_cpy, s1, s1_len + 1);
	return (s_cpy);
}
