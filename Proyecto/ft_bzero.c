/*La función bzero() pone a cero los primeros n bytes del área de bytes que comienza en s.*/

#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	char *cadena;
	cadena = (char *)s;
	size_t ind;
	ind = 0;
	while (ind < n)
	{
		cadena[ind] = '\0';
		ind++;
	}
}
