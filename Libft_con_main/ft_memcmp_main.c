/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:26:34 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/14 14:26:34 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <stddef.h>

/* Compare the first n characters of the object pointed to by s1
(interpreted as unsigned char) with first n characters
of the object pointed to by s2 (interpreted as an unsigned char).
return value:
The function returns an integer greater than, equal to, or less than zero,
appropriately depending on the object pointed to by s1 is greater than,
 equal to, or less than the object pointed to by s2.*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	ind;

	ind = 0;
	while (ind < n)
	{
		if (((unsigned char *)s1)[ind] != ((unsigned char *)s2)[ind])
			return (((unsigned char *)s1)[ind] - ((unsigned char *)s2)[ind]);
		ind++;
	}
	return (0);
}


int main(void) {
    char str1[] = "Hello, world!";
    char str2[] = "Hello, universe!";
    int result;

    // Compare the first 5 characters of the strings
    result = ft_memcmp(str1, str2, 5);
		printf("Str1 es: 		%s\n", str1);
		printf("Str2 es: 		%s\n", str2);
		if (result < 0) {
        printf("str1 es menor que str2 si comparamos 5 primeros caracteres\n");
    } else if (result > 0) {
        printf("str1 es mayor que str2 si comparamos 5 primeros caracteres\n");
    } else {
				printf("str1 es igual que str2 si comparamos 5 primeros caracteres\n");
		}

    // Compare the entire strings
    result = ft_memcmp(str1, str2, strlen(str1));
    if (result < 0) {
        printf("str1 es menor que str2 comparando la dimension total de la str1\n");
    } else if (result > 0) {
        printf("str1 es mayor que str2 comparando la dimension total de la str1\n");
    } else {
        printf("str1 es igual que str2 comparando la dimension total de la str1\n");
    }

    return 0;
}
