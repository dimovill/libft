/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:16:06 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/15 21:13:17 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);
	else
		return (0);
}

int main()
{
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (ft_isdigit(c))
    {
        printf("The character '%c' is a digit .\n", c);
    }
    else
    {
        printf("The character '%c' is not a digit.\n", c);
    }
    
    return 0;
}