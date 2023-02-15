#include <unistd.h>
#include <stdio.h>
/*Devuelve la longitud de una cadena de texto*/

/**
 * @brief The ft_strlen function computes the length of the string array.
 * @param array 
 * @return  The strlen() function returns the number of characters that precede
 *  the terminating NUL character.
 */
size_t	ft_strlen(char *array)
{
	size_t	cont;

	cont = 0;
	while (array[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

int	main()
{
	char array[200];
	printf("Escribe cualquier cosa sin espacios: \n");
	scanf("%s",&array);
	printf("La longitud de la cadena es:\n");
	printf("Segun ft_strlen: %i:\n", ft_strlen(array));
	printf("Segun strlen: %i\n", strlen(array));
	printf("Segun ft_strlen 'Cacaculopedopis': %i:\n", ft_strlen("Cacaculopedopis"));
	printf("Segun strlen 'Cacaculopedopis': %i\n", strlen("Cacaculopedopis"));
	return (0);
}

