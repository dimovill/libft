/**			ISASCII
 * @brief The ft_isascii function tests for an ASCII character,
 * which is any charac-ter characterbetween 0 and digital 127 
 * inclusive.
 * https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/man3/isascii.3.html
 * @param d Character
 * @return Return 0 (Non ASCII-False) 
 * 					Return 1 (ASCII- True)
 */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int ft_isascii (int d)

{
    if (d >= 0 && d <= 127 )
        return (1);
        else
        return (0);
}

int main (void)
{
        char d;
        
		printf("Enter a character: ");
    	scanf("%c",&d);
		printf("ft_isascii... 1=ASCII, 0 = No ASCII:        \n%d\n", ft_isascii(d));
		printf("isascii (funcion original) !0 =ASCII, 0 = No ASCII:      \n%d\n", isascii(d));
        return (0);      
}
