/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:57:23 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/20 22:04:30 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*psrc;

	psrc = (char *)src;
	j = ft_strlen(src);
	if (size == 0)
		return (j);
	else
	{
		i = 0;
		while (psrc[i] != '\0' && i < (size - 1))
		{
			dest[i] = psrc[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
