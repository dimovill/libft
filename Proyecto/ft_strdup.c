/* La  funci�n  strdup()  devuelve  un  puntero  a  una  nueva cadena de caracteres que es un
			 duplicado de la cadena apuntada por s.   La  memoria  para  la  nueva  cadena  se  obtiene
			 autom�ticamente con malloc(3), y puede (y debe) liberarse con free(3).*/
#include <stddef.h> // Valida el identificador NULL

char *ft_strdup(const char *s)
{
	int i;
	char *destino;

	i = 0;
	while (s[i])
		i++;
	destino = malloc(sizeof(*s) * (i + 1));
	i = 0;
	if (!destino)  //if (destino == NULL) if (destino == 0)
		return (NULL);
	while (s[i])
	{
		destino[i] = s[i];
		i++;
	}
	destino[i] = '\0';
	return (destino);
}
