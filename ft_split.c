/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 21:57:05 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/16 21:57:05 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"

unsigned int	cuentapalabras(char const *s, char c)
{
	unsigned int	i;
	unsigned int	cont;

	i = 0;
	cont = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		{
			if (s[i] != '\0')
				cont++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (cont);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	size_t	n;

	str = malloc(sizeof(char *) * (cuentapalabras (s, c) + 1));
	if (!str)
		return (0);
	n = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			str[n++] = ft_substr(s - len, 0, len);
		}
		else
		s++;
	}
	str[n] = 0;
	return (str);
}
