#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t strlcpy(char *dst, char *src, size_t size)// Funcion original strlcpy
 {
size_t len = size;
char*  dstptr = dst;
char*  srcptr = src;

if(len && --len)
do { if(!(*dstptr++ = *srcptr++)) break; } while(--len);

if (!len && size) *dstptr=0;

return (strlen(dst));
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	indice;

	indice = 0;
	size = size - 1;
	while (src[indice] != '\0' && indice < size)
	{
		dest[indice] = src[indice];
		indice++;
	}
	dest[indice] = '\0';
	return (indice);
}

int	main (void)
{
	char src[] = "nomelocreo";
	char dest[] = "cacaculopedopis";
	unsigned  int size;
	size = 6;

	printf("%s, %s\n", src, dest);
	ft_strlcpy(dest, src, size);
	printf("Segun ft_strlcpy: Cadena: %s  Tama�o destino: %i \n", dest, ft_strlcpy(dest, src, size));
	strlcpy(dest, src, size);
	printf("Segun strlcpy: Cadena: %s  Tama�o destino: %i \n", dest, strlcpy(dest, src, size) );
	ft_strlcpy(dest, src, 5);
	printf("5 %s\n", dest);
	ft_strlcpy(dest, src, 9);
	printf("9 %s\n", dest);
	ft_strlcpy(dest, src, 3);
	printf("3 %s\n", dest);
	return (0);
}
