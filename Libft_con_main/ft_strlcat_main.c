/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:40:54 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/15 23:51:08 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h> // Valida el identificador NULL
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *array)
{
	int	cont;

	cont = 0;
	while (array[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t idst;
	size_t jsrc;
	
	idst = 0;
	jsrc = 0;
	while (dst[idst] != '\0' && idst < size)
	{
		idst++;
	}
	while (src[jsrc] != '\0' && (idst + jsrc + 1) < size)
	{
		dst[idst + jsrc] = src[jsrc];
		jsrc++;
	}
	if (idst < size)
		dst[idst + jsrc] = '\0';
	return (ft_strlen(src) + idst);
}

int main()
{
    char src[] = "hello";
    char dst[20] = "world";
    size_t result = ft_strlcat(dst, src, sizeof(dst));
    printf("Concatenated string: %s\n", dst);
    printf("Length of concatenated string: %lu\n", result);
    return 0;
}
