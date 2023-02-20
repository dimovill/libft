/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:25:24 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/20 21:14:27 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Libreria stdlib.h
void *calloc(size_t nmemb, size_t tamanyo);
Adjudica espacio para un array de nmemb objetos, cada cual tiene
 como tamaño tamanyo. El espacio es inicializado a cero todos los bits.

Valor de retorno:
La función calloc retorna o bien un puntero nulo o bien un puntero 
al espacio adjudicado.*/

void	*ft_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int	total;
	char			*reserva;
	unsigned int	i;

	i = 0;
	total = nmemb * size;
	reserva = malloc(total);
	if (reserva == NULL)
		return (NULL);
	while (i < total)
	{
		reserva[i] = 0;
		i++;
	}
	return (reserva);
}
