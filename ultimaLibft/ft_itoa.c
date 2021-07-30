/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epagne-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 23:44:23 by epagne-m          #+#    #+#             */
/*   Updated: 2020/02/12 05:59:27 by epagne-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_elmnts(int n)
{
	int elmnts;

	elmnts = 0;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		elmnts++;
	}
	return (elmnts);
}

static int	casas_dec(int elmnts)
{
	int	dec;

	dec = 1;
	while (elmnts > 0)
	{
		dec = dec * 10;
		elmnts--;
	}
	return (dec);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		dec;
	int		i;

	if (!(ret = (char*)malloc((num_elmnts(n) + 2) * sizeof(char))))
		return (NULL);
	if (n == -2147483648)
		return (ft_substr("-2147483648", 0, 11));
	i = 0;
	if (n < 0)
	{
		ret[i++] = '-';
		n = n * -1;
	}
	dec = casas_dec(num_elmnts(n) - 1);
	while (dec > 0)
	{
		ret[i++] = (n / dec % 10 + 48);
		dec = dec / 10;
	}
	ret[i] = '\0';
	return (ret);
}
