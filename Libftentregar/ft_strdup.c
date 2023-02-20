/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:33:25 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/16 00:33:25 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The strdup() function returns a pointer to a new string
characters that is a duplicate of the string pointed to by s.
The memory for the new string is obtained automatically with
malloc(3), and can (and should) be freed with free(3).*/
#include <stddef.h> // Valida el identificador NULL

char	*ft_strdup(const char *s)
{
	int		i;
	char	*destino;

	i = 0;
	while (s[i])
		i++;
	destino = malloc(sizeof(*s) * (i + 1));
	i = 0;
	if (!destino)
		return (NULL);
	while (s[i])
	{
		destino[i] = s[i];
		i++;
	}
	destino[i] = '\0';
	return (destino);
}
