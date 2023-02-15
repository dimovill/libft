/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:57:23 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/15 01:28:09 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t indice;

	indice = 0;
	size = size - 1;
	while (src[indice] != '\0' && indice < size)
	{
		dest[indice] = src[indice];
		indice++;
	}
	dest[indice] = '\0';
	return (indice);
}