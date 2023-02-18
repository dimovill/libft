/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:16:15 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/15 21:14:13 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

int	ft_isprint(int d)
{
	if (d >= 32 && d <= 126)
		return (1);
	else
		return (0);
}

int main()
{
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (ft_isprint(c))
    {
        printf("The character '%c' is printable .\n", c);
    }
    else
    {
        printf("The character '%c' is not printable.\n", c);
    }
    
    return 0;
}