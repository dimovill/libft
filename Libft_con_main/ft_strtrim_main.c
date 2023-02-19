/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:42:24 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/16 08:42:24 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *array)
{
	size_t	cont;

	cont = 0;
	while (array[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*cadena;
	char	caracter;

	cadena = (char *)s;
	caracter = (char)c;
	i = ft_strlen(s);
	while (i != 0)
	{
		if (cadena[i] == c)
			return (&cadena[i]);
		i--;
	}
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*destino;

	i = 0;
	while (s[i])
		i++;
	destino = malloc(sizeof(*s) * (i + 1));
	i = 0;
	if (!destino)
		return (NULL);
	while (s[i])
	{
		destino[i] = s[i];
		i++;
	}
	destino[i] = '\0';
	return (destino);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cadena;
	char	character;

	character = (char)c;
	i = 0;
	cadena = (char *)s;
	while (cadena[i] != '\0')
	{
		if (cadena[i] == c)
			return (&cadena[i]);
		i++;
	}
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			contador;
	char			*copia;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{
		if (!(copia == malloc(sizeof(char))))
			return (NULL);
		copia[0] = 0;
		return (copia);
	}
	if (!(copia == malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = start;
	contador = 0;
	while (s[i] && contador < len)
	{
		copia[contador] = s[i];
		contador++;
		i++;
	}
	copia[contador] = '\0';
	return (copia);
}

char	*ft_strtrim(char const *s1, char const *set)
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
	while (s1[fin] && ft_strrchr(set, s1[fin]))
		--fin;
	recorte = ft_substr(s1, ini, fin - ini + 1);
	return (recorte);
}

int main()
{
    char const *s = "  example string   ";
    char const *set = "str";
    char *trimmed = ft_strtrim(s, set);
    printf("Original string: \"%s\"\n", s);
    printf("Trimmed string: \"%s\"\n", trimmed);
    free(trimmed);
    return 0;
}