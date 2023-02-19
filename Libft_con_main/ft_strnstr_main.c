/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 01:50:34 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/15 21:45:45 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *grande, const char *pequeno, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*pequeno == '\0')
		return ((char *)grande);
	while (grande[i] != '\0' && i < len)
	{
		j = 0;
		while (pequeno[j] == grande[i + j] && (i + j) < len)
		{
			if (pequeno[j + 1] == '\0')
				return ((char *)grande + i);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char str1[20] = "Hola mundo";
	char str2[10] = "ndo";
	char *resultado;

	resultado = ft_strnstr(str1, str2, strlen(str1));
	if (resultado == NULL)
		printf("El substring no fue encontrado.\n");
	else
		printf("El substring fue encontrado en la posición %s.\n", resultado);

	return (0);
}
