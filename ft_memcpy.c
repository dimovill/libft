/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:58:18 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/14 14:58:18 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char	*entra;
	char	*sale;
	size_t	ind;

	entra = (char *)s1;
	sale = (char *)s2;
	ind = 0;
	while (ind < n)
	{
		entra[ind] = sale[ind];
		ind++;
	}
	return (s1);
}
