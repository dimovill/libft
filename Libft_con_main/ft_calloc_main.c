/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:25:24 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/16 00:25:24 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
//#include "libft.h"
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
		return(NULL);
	while (i < total)
	{
		reserva[i] = 0;
		i++;
	}
	return (reserva);
}


void *ft_calloc(unsigned int nmemb, unsigned int size);

int main()
{
    int *arr;
    int i;
    int n = 5;
    
    arr = (int *)ft_calloc(n, sizeof(int));
    
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    
    return 0;
}