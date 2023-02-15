#include <stdio.h>
#include <string.h>
/* Compara los primeros n caracteres del objeto apuntado por s1 
(interpretado como unsigned char) con los primeros n caracteres 
del objeto apuntado por s2 (interpretado como unsigned char).
Valor de retorno:
La función retorna un número entero mayor, igual, o menor que cero, 
apropiadamente según el objeto apuntado por s1 es mayor, igual, o 
menor que el objeto apuntado por s2.*/

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t ind;

	ind = 0;
	while (ind < n)
	{
		if (((unsigned char*)s1)[ind] != ((unsigned char*)s2)[ind])
			return (((unsigned char*)s1)[ind] - ((unsigned char*)s2)[ind]);
		ind++;
	}
	return (0);
}

int main()
{
	char a[] = "Colon descubridor de America";
	char b[] = "Colon descubridor de America";
	int i;
	int ift;

	for (i = 0; i < 3; i++)
		printf("a[%d]=%c ", i, a[i]);
	printf("\n");
	for (i = 0; i < 3; i++)
		printf("b[%d]=%c ", i, b[i]);
	printf("\n");

	i = memcmp(a, b, 3);
	printf("a es ");
	if (i < 0)
		printf("menor que");
	else if (i > 0)
		printf("mayor que");
	else
		printf("igual a");
	printf(" b\n");

	printf("\n\nft_memcmp\n");
	for (i = 0; i < 3; i++)
	printf("a[%d]=%c ", i, a[i]);
	printf("\n");
	for (i = 0; i < 3; i++)
		printf("b[%d]=%c ", i, b[i]);
	printf("\n");

	ift = ft_memcmp(a, b, 3);
	printf("a es ");
	if (ift < 0)
		printf("menor que");
	else if (ift > 0)
		printf("mayor que");
	else
		printf("igual a");
	printf(" b\n");


	return 0;
}