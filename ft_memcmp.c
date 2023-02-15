/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:26:34 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/14 14:26:34 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Compare the first n characters of the object pointed to by s1
(interpreted as unsigned char) with first n characters
of the object pointed to by s2 (interpreted as an unsigned char).
return value:
The function returns an integer greater than, equal to, or less than zero,
appropriately depending on the object pointed to by s1 is greater than,
 equal to, or less than the object pointed to by s2.*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	ind;

	ind = 0;
	while (ind < n)
	{
		if (((unsigned char *)s1)[ind] != ((unsigned char *)s2)[ind])
			return (((unsigned char *)s1)[ind] - ((unsigned char *)s2)[ind]);
		ind++;
	}
	return (0);
}
