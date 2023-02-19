/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:16:32 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/19 20:24:39 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	longitud(long n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		c++;
		n = -n;
		longitud(n);
	}
	if (n == 0)
	{
		c++;
		return (c);
	}
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	long	len;
	long	nmb;
	char	*str;

	nmb = (long)n;
	len = longitud(nmb);
	str = (char *)malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	if (nmb < 0)
	{
		str[0] = '-';
		nmb = -nmb;
	}
	if (nmb == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (nmb > 0)
	{
		str[len] = nmb % 10 + 48;
		nmb = nmb / 10;
		len--;
	}
	return (str);
}
