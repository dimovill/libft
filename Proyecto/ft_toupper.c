/**			TOUPPER
 * @brief The ft_toupper function converts a lower-case letter to the
 * corresponding upper-case letter.
 * Google: toupper function code mac
 * @param c Lowercase character
 * @return Return c converted in Uppercase.
 */
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>


int	ft_toupper (int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

int main ()
{
   char d;
        
		printf("Enter a character: ");
    	scanf("%c",&d);
		printf("ft_toupper....................     %c\n", ft_toupper(d));
        printf("ft_toupper (en ASCII).........     %i\n", ft_toupper(d));
		printf("toupper (funcion original)         %c\n", toupper(d));
        printf("toupper (func. original) ASCII     %i\n", toupper(d));
        return (0); 
}
