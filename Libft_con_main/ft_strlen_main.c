/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:07:44 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/14 09:21:52 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(char *array)
{
	size_t	cont;

	cont = 0;
	while (array[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

int main()
{
    char src[] = "hello makinavaja";
    size_t result = ft_strlen(src);
    printf("Length of : %lu\n", result);
    return 0;
}
