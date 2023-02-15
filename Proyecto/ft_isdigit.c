//#include <libft.h>

/** 		ISDIGIT
 *  @brief The isdigit() function tests for a decimal
 *  digit character.
 * https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/man3/isdigit.3.html
 * @param d Character
 * @return Return 0 (Non decimal-False) Return 1 (Decimal- True)*/	


#include <stdio.h>
#include <unistd.h>


int ft_isdigit (int d)
{
    if (d >= '0' && d <= '9')
        return (1);
        else
        return (0);
}

int main (void)
{
        char d;
        
		printf("Enter a character: ");
    	scanf("%c",&d);
		printf("ft_isdigit... 1=Numerico, 0 = No Numerico:        \n%d\n", ft_isdigit(d));
		printf("isdigit (funcion original) 1=Numerico, 0 = No Numerico:      \n%d\n", isdigit(d));
        return (0);      
}
