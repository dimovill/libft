/*Copia el valor de c (convertido a unsigned char) en cada uno de los primeros n caracteres en el objeto apuntado por s.

Valor de retorno:
La función retorna el valor de s.*/


#include <stddef.h> //Es para que se trague size_t

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

#include <stdio.h>
#include <string.h>
  
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    memset(str + 13, '.', 8*sizeof(char));
  
    printf("After memset():  %s", str);
    char str1[50] = "En un lugar de la Mancha de cuyo nombre";
    printf("\nBefore ft_memset(): %s\n", str1);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str1 + 13, '&', 8);
  
    printf("After ft_memset():  %s", str1);
    return 0;
}
