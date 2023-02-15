/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:16:31 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/13 09:16:31 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*cadena;
	char	caracter;

	cadena = (char *)s;
	caracter = (char)c;
	i = ft_strlen(s);
	while (i != 0)
	{
		if (cadena[i] == c)
			return (&cadena[i]);
		i--;
	}
	return (NULL);
}

size_t	ft_strlen(char *array)
{
	int	cont;

	cont = 0;
	while (array[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}
