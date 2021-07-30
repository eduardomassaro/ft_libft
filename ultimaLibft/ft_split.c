/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 07:27:57 by epagne-m          #+#    #+#             */
/*   Updated: 2020/02/15 15:55:18 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_finder(char const *s, char c)
{
	int	i;
	int	n;
	int	isword;

	i = 0;
	n = 0;
	isword = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && isword == 0)
		{
			n++;
			isword = 1;
		}
		if (s[i] == c)
			isword = 0;
		i++;
	}
	return (n);
}

static int	len_word(char const *s, char c, int i)
{
	int aux;

	aux = i;
	while (s[aux] != '\0' && s[aux] != c)
		aux++;
	return (aux - i);
}

static int	copy_word(char *copy, char const *s, char c, int j)
{
	int	k;
	int end;

	k = 0;
	end = j + len_word(s, c, j);
	while (j < end)
	{
		copy[k] = s[j];
		j++;
		k++;
	}
	copy[k] = '\0';
	return (end);
}

char		**ft_split(char const *s, char c)
{
	char	**split;
	int		words;
	int		i;
	int		j;

	if (s == 0)
		return (0);
	words = word_finder(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (split == 0)
		return (0);
	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		split[i] = (char *)malloc(sizeof(char) * (len_word(s, c, j) + 1));
		if (split[i] == 0)
			return (0);
		j = copy_word(split[i], s, c, j);
		i++;
	}
	split[i] = 0;
	return (split);
}
