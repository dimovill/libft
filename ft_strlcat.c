/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:40:54 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/15 08:40:54 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	idst;
	int	isrc;
	int dstorig;
	int srcorig;
	dstorig = ft_strlen(dst);
	srcorig = ft_strlen(src);
	idst = 0;
	isrc = 0;
	while (dst[idst] != '\0' && idst < size)
		idst++;
	while (src[isrc] != '\0' && (idst + isrc + 1) < size)
	{
		dst[idst + isrc] = src[isrc];
		isrc++;
	}
	if (idst < size)
		dst[idst + isrc] = '\0';
	return (dstorig + srcorig);
}