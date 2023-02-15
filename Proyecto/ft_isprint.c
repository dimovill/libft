/**
 * @brief The isprint() function tests for any printing character,
 * including space. ASCII DECIMAL 32 - 126
 * @param d Character
 * @return Return 0 (Non printable)
 * 					Return 1 (Printable)
 */
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int ft_isprint (int d)

{
    if (d >= 32 && d <= 126 )
        return (1);
        else
        return (0);
}

int main (void)
{
        char d;
        
		printf("Enter a character: ");
    	scanf("%c",&d);
		printf("ft_isprint... 1=Imprimible, 0 = No Imprimible:        \n%d\n", ft_isprint(d));
		printf("isprint (funcion original) !0 =Imprimible, 0 = No Imprimible:      \n%d\n", isprint(d));
        return (0);      
}
