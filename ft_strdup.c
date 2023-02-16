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
/*La  funci�n  strdup()  devuelve  un  puntero  a  una  nueva cadena de 
caracteres que es un duplicado de la cadena apuntada por s.
La  memoria  para  la  nueva  cadena  se  obtiene autom�ticamente con 
malloc(3), y puede (y debe) liberarse con free(3).*/
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
