/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 16:53:23 by epagne-m          #+#    #+#             */
/*   Updated: 2020/02/11 18:44:41 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	beg;
	size_t	tam;
	char	*ret;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[i] != '\0' && checkset(s1[i], set) == 1)
		i++;
	beg = i;
	i = ft_strlen(s1) - 1;
	while (i > 0 && checkset(s1[i], set) == 1)
		i--;
	tam = i > beg ? i - beg + 1 : 0;
	ret = (char *)malloc((tam + 1) * sizeof(char));
	if (ret != 0)
	{
		if (tam == 0)
			ret[0] = '\0';
		else
			ft_strlcpy(ret, &s1[beg], tam + 1);
	}
	return (ret);
}
