/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:16:01 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/15 21:12:21 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
int	ft_isascii(int d)
{
	if (d >= 0 && d <= 127)
		return (1);
	else
		return (0);
}
int main()
{
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (ft_isascii(c))
    {
        printf("The character '%c' is an ascii character.\n", c);
    }
    else
    {
        printf("The character '%c' is not an ascii character.\n", c);
    }
    
    return 0;
}