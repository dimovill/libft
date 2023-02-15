#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

unsigned int	cuentapalabras(char const *s, char c)
{
	unsigned int i;
	unsigned int cont;
	i = 0;
	cont = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		{
			if (s[i] != '\0')
				cont++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (cont);
}

int main(void)
{
	char *cadena;
	char c;

	
	printf("el numero de palabras es\n%d\n", cuentapalabras("hola, adios, hasta luego", ','));
	return (0);
}