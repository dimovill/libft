/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:40:07 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/16 00:40:07 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.
Parámetros s: La string desde la que crear la substring.
start: El índice del caracter en ’s’ desde el que
empezar la substring.
len: La longitud máxima de la substring*/
#include <stddef.h> // Valida el identificador NULL
//#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			contador;
	char			*copia;

	if (s == NULL)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
	{
		copia[0] = 0;
		return (copia);
	}
	copia = malloc(sizeof(char) * (len + 1));
	contador = 0;
	if (!copia)
		return (0);
	while (s[start] && contador < len)
	{
		copia[contador] = s[start];
		contador++;
		start++;
	}
	copia[contador] = '\0';
	return (copia);
}
