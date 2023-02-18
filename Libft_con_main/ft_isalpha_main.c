/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:15:50 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/13 22:02:08 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int	ft_isalpha(int c1)
{
	if ((c1 >= 97 && c1 <= 122) || (c1 >= 65 && c1 <= 90))
		return (1);
	else
		return (0);
}
#include <stdio.h>

int ft_isalpha(int c);

int main()
{
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (ft_isalpha(c))
    {
        printf("The character '%c' is an alphabetic character.\n", c);
    }
    else
    {
        printf("The character '%c' is not an alphabetic character.\n", c);
    }
    
    return 0;
}