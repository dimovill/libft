/*Copia los primeros n caracteres del objeto apuntado por s2 al objeto apuntado por s1.

Valor de retorno:
La función retorna el valor de s1. Si al copiar un objeto al otro se superponen, entonces el comportamiento no está definido.*/

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *s1, const void *s2, size_t n)
{
	char *entra;
	char *sale;
	size_t ind;
	entra = (char *)s1;
	sale = (char *)s2;
	ind = 0;
	while (ind < n)
	{
		entra[ind] = sale[ind];
		ind++;
	}
	return (s1);
}

int main()
{
	char a[] = "abcdefg";
	char b[] = "rs1tuv";
	int i;
	char a1[] = "abcdefg";
	char b1[] = "rs1tuv";
	int i1;
	printf("Con ft_memcpy\n");
	printf("Cadena original =   %s\n", a);
	printf("Cadena que se mueve =  %s\n", b);
	printf("Cad.que resulta pasando 5 caracteres= %s\n\n", ft_memcpy(a, b, 5));
	printf("Con memmove\n");
	printf("Cadena original =   %s\n", a1);
	printf("Cadena que se mueve =  %s\n", b1);
	printf("Cadena que resulta pasando 5 caracteres= %s\n", memcpy(a1, b1, 5));
	return 0;
}