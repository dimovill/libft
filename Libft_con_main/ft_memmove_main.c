/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 00:38:41 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/15 21:41:50 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

/* Copies the first n characters from the object pointed to by "out" to the 
object pointed to by "in". However, it makes sure they don't overlap. For this
 reason, it copies the characters to an array temporarily. Then copy back from 
 the temporary array to the object in question.

return value:
The function returns the value of s1.*/

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*entra;
	char	*sale;
	size_t	ind;

	entra = (char *)s1;
	sale = (char *)s2;
	ind = 0;
	if (entra == 0 && sale == 0)
		return (0);
	if (sale < entra)
	{
		while (n-- > 0)
		{
			entra[n] = sale[n];
		}
	}
	else
	{
		while (ind < n)
		{
				entra[ind] = sale[ind];
				ind++;
		}
	}
	return (s1);
}

int main()
{
	char a[15] = "abcdefg";
	char b[] = "rs1tuvffgees";
	int i;
	char a1[15] = "abcdefg";
	char b1[] = "rs1tuvffgees";
	int i1;
	printf("Con ft_memmove\n");
	printf("Cadena original =   %s\n", a);
	printf("Cadena que se mueve =  %s\n", b);
	printf("Cad.que resulta pasando 10 caracteres= %s\n\n", ft_memmove(a, b, 10));
	printf("Con memmove\n");
	printf("Cadena original =   %s\n", a1);
	printf("Cadena que se mueve =  %s\n", b1);
	printf("Cadena que resulta pasando 10 caracteres= %s\n", memmove(a1, b1, 10));
	return 0;
}
