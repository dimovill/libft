/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 23:26:32 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/13 23:26:32 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *cadena;
	cadena = (char *)s;
	size_t ind;
	ind = 0;
	while (ind < n)
	{
		cadena[ind] = '\0';
		ind++;
	}
}