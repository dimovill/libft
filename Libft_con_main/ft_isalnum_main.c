/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:15:32 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/15 21:09:48 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int d)
{
	if ((d >= 48 && d <= 57) || (d >= 65 && d <= 90) || (d >= 97 && d <= 122))
		return (1);
	else
		return (0);
}

int main()
{
    char c;
    
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (ft_isalnum(c))
    {
        printf("The character '%c' is alphanumeric.\n", c);
    }
    else
    {
        printf("The character '%c' is not alphanumeric.\n", c);
    }
    
    return 0;
}