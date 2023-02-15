/* Prototipo char *ft_strtrim(char const *s1, char const *set);
Archivos a entregar
-
Parámetros s1: La string que debe ser recortada.
set: Los caracteres a eliminar de la string.
Valor devuelto La string recortada.
NULL si falla la reserva de memoria.
Funciones autorizadas : malloc
Descripción Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)*/

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
char	*recorte;
	size_t	ini;
	size_t	fin;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	fin = ft_strlen(s1) - 1;
	ini = 0;
	while (s1[ini] && ft_strchr(set, s1[ini]))
		++ini;
	while (s1[fin] && ft_strchr(set, s1[fin]))
		--fin;
	recorte = ft_substr(s1, ini, fin - ini + 1);
	return (recorte);
}