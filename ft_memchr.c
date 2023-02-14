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

#include "libft.h"

/* Locate the first occurrence of c (converted in unsigned char)
in the first n bytes (converted in unsigned char).*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *punt;
	unsigned char caracter;
	punt = (unsigned char *)s;
	caracter = (unsigned char)c;
	i = 0;

	while (i < n)
		{
			//if (*(punt + i) == caracter)
			if ((punt)[i] == caracter)
			{
				//return (punt + i);
				return (&(punt)[i]);
			}
			i++;
		}
		return 0;
}