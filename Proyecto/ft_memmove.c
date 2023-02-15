#include <stdio.h>
#include <string.h>
/* Copia los primeros n caracteres del objeto apuntado por "sale" al objeto apuntado por "entra".Sin embargo, se asegura de que no estén superpuestos. Por esta razón, copia los caracteres a un array/arreglo temporalmente. Después vuelve a copiar del array temporal al objeto en cuestión.

Valor de retorno:
La función retorna el valor de s1.*/

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*entra;
	char	*sale;
	size_t	ind;
	entra = (char *)s1;
	sale = (char *)s2;
	ind = 0;
	if (entra == 0 && sale == 0)
		return (0);
	if (sale < entra)
	{
			while (n > 0)
			{
				n--;
				entra[n] = sale[n];
			}
	}
	else 
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
	char b[] = "rstuv";
	int i;
	char a1[] = "abcdefg";
	char b1[] = "rstuv";
	int i1;
	printf("Con ft_memmove\n");
	printf("Cadena original =   %s\n", a);
	printf("Cadena que se mueve =  %s\n", b);
	printf("Cad.que resulta pasando 5 caracteres= %s\n\n", ft_memmove(a, b, 5));
	printf("Con memmove\n");
	printf("Cadena original =   %s\n", a1);
	printf("Cadena que se mueve =  %s\n", b1);
	printf("Cadena que resulta pasando 5 caracteres= %s\n", memmove(a1, b1, 5));
	return 0;
}