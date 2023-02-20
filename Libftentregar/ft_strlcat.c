/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:40:54 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/20 21:28:19 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	idst;
	size_t	jsrc;
	char	*src1;

	src1 = (char *)src;
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
	return (ft_strlen(src1) + idst);
}
