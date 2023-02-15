/// @brief The ft_isalpha function tests for any character for which isupper or islower is true.
/// @param c1 Character
/// @return The ft_isalpha() function tests for any character for which isupper or islower is true.

#include <stdio.h>
#include <unistd.h>

int ft_isalpha (int c1)

{
    if ((c1 >= 97 && c1 <= 122) || (c1 >= 65 && c1 <= 90))
        return (1);
        else
        return (0);
}

int main (void)
{
        printf("1=Alfabetico, 0 =No Alfabetico: %d\n", ft_isalpha(96));
        return (0);
}