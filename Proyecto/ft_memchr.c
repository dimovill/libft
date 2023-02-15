#include <stdio.h>
#include <string.h>
/* Localiza la primera aparición del carácter c (convertido a unsigned char)
en los primeros n caracteres (cada uno interpretado como un unsigned char)
del objeto apuntado por s.

Valor de retorno:
La función retorna un puntero al carácter localizado, o un puntero nulo
si el carácter no apareció en el objeto.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *punt;
	unsigned char caracter;
	punt = (unsigned char *)s;
	caracter = (unsigned char)c;
	i = 0;

	while (i < n)
		{
			//if (*(punt + i) == caracter)
			if ((punt)[i] == caracter)
			{
				//return (punt + i);
				return (&(punt)[i]);
			}
			i++;
		}
		return 0;
}

int main()
{
	char cadena[] = "Erase una vez...";
	char *puntero;
	char *punteroft;
	puntero = (char *)memchr(cadena, 's', 15);
	printf("%s\n", cadena);
	printf("%s\n\n", puntero);
	punteroft = (char *)ft_memchr(cadena, 's', 15);
	printf("%s\n", cadena);
	printf("%s\n\n", punteroft);

	return 0;
}

