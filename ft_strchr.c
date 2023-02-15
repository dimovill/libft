/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:16:21 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/13 09:16:21 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cadena;
	char	character;

	character = (char)c;
	i = 0;
	cadena = (char *)s;
	while (cadena[i] != '\0')
	{
		if (cadena[i] == c)
			return (&cadena[i]);
		i++;
	}
	return (0);
}
