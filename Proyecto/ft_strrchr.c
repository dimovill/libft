#include <string.h>
#include <stdio.h>

/**
 * @brief The strchr() function locates the LAST occurrence of c
 * (converted to a		 char) in the string pointed to by s.  The 
 * terminating null character isconsidered to be part of the string;
 * therefore if c is `\0', the functions locate the terminating `\0'.
 * @param s A string
 * @param c Character we want to locate
 * @return a pointer to the located character.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	 i;
	char *cadena;
	char caracter;

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

int	ft_strlen(char *array)
{
	int	cont;

	cont = 0;
	while (array[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

int main()
{
   char s[11] = "Hola amigos";
   char c = 'o';

   printf( "s=     %s\t", s );
   printf( "c=   %c\n", c );
   printf( "strchr=      %s\n", strrchr( s, c ) );
   printf("ft_strchr=    %s\n", ft_strrchr(s, c));

   return 0;
}