#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
/**			TOLOWER
 * @brief The ft_tolower function converts a upper-case letter to the
 * corresponding lower-case letter.
 * Google: tolower function code mac
 * @param c Uppercase character
 * @return Return c converted in Lowercase.
 */
int	ft_tolower (int d)
{
	if (d >= 'A' && d <= 'Z')
	{
		d = d + 32;
	}
	return (d);
}

int main ()
{
    char d;

    printf ("Pulse una letra Mayuscula: \n");
    scanf ("%c", &d);
    printf ("la letra pulsada es:           %c\n", d);
    printf ("Conversion ft_tolower          %c\n", ft_tolower(d));
    printf ("Conversion ft_tolower ASSCII   %i\n", ft_tolower(d));
    printf ("conversion tolower(original)   %c\n", tolower(d));
    printf ("conversion tolower(ASCII)      %i\n", tolower(d));
}