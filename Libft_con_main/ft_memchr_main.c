/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:21:26 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/14 09:21:26 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/* Locate the first occurrence of c (converted in unsigned char)
in the first n bytes.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*punt;
	unsigned char	caracter;

	punt = (unsigned char *)s;
	caracter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if ((punt)[i] == caracter)
		{
			return (&(punt)[i]);
		}
			i++;
	}
	return (0);
}

int main()
{
	char cadena[] = "Erase una vez...";
	char *puntero;
	char *punteroft;
	char *punteroft1;
	puntero = (char *)memchr(cadena, 's', 15);
	printf("%s\n", cadena);
	printf("%s\n\n", puntero);
	punteroft = (char *)ft_memchr(cadena, 's', 15);
	printf("%s\n", cadena);
	printf("%s\n\n", punteroft);
	punteroft1 = (char *)ft_memchr(cadena, 'x', 15);
	printf("%s\n", cadena);
	printf("%s\n\n", punteroft1);
	return 0;
}