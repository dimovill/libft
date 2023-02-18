/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 09:21:36 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/14 09:21:36 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h> //This library is to admite size_t

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
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