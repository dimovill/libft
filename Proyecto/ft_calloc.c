/* Libreria stdlib.h
void *calloc(size_t nmemb, size_t tamanyo);
Adjudica espacio para un array de nmemb objetos, cada cual tiene
 como tamaño tamanyo. El espacio es inicializado a cero todos los bits.

Valor de retorno:
La función calloc retorna o bien un puntero nulo o bien un puntero al espacio adjudicado.*/

#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total;
	char *reserva;
	unsigned int i;
	i = 0;
	total = nmemb * size;
	reserva = malloc(total);
	if (reserva == NULL)
		returns(NULL);
	while (i < total)
	{
		reserva[i] = 0;
		i++;
	}
	return (reserva);
}
