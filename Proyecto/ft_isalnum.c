/**			ISALNUM
 * @brief  The ft_isalnum function tests for a decimal or
 * digit character
 * https://developer.apple.com/library/archive/documentation/System/Conceptual/ManPages_iPhoneOS/man3/isalnum.3.html
 * @param d Character
 * @return Return 0 (Non decimal/digit-False)
 * 					Return 1 (Decimal/digit- True)
 */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int ft_isalnum(int d)

{
    if ((d >= '0' && d <= '9') || (d >= 'A' && d <= 'Z') || (d >= 'a' && d <= 'z'))
        return (1);
    else
        return (0);
}

int main(void)
{
    char d;

    printf("Enter a character: ");
    scanf("%c", &d);
    printf("ft_isalnum... 1=AlfaNumerico, 0 = No AlfaNumerico:        \n%d\n", ft_isalnum(d));
    printf("isalnum (funcion original) !0 =ALfaNumerico, 0 = No AlfaNumerico:      \n%d\n", isalnum(d));
    return (0);
}