#include <string.h>
#include <stdio.h>

/**
 * @brief The strchr() function locates the first occurrence of c
 * (converted to a		 char) in the string pointed to by s.  The 
 * terminating null character isconsidered to be part of the string;
 * therefore if c is `\0', the functions locate the terminating `\0'.
 * @param s A string
 * @param c Character we want to locate
 * @return a pointer to the located character.
 */
char	*ft_strchr(const char *s, int c)
{
	int i;
	char *cadena;
	char character;

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

int main()
{
   char s[11] = "Hola amigos";
   char c = 'a';

   printf( "s=     %s\t", s );
   printf( "c=   %c\n", c );
   printf( "strchr=      %s\n", strchr( s, c ) );
   printf("ft_strchr=    %s\n", ft_strchr(s, c));

   return 0;
}
