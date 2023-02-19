/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:16:21 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/13 09:16:21 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cadena;
	char	character;

	character = (char)c;
	i = 0;
	cadena = (char *)s;
	while (cadena[i] != '\0')
	{
		if (cadena[i] == c)
			return (&cadena[i]);
		i++;
	}
	return (0);
}

int main()
{
	char s[] = "Hola amigos";
	char c = 'x';

	printf("s=     %s\t", s);
	printf("c=   %c\n", c);
	printf("strchr=      %s\n", strchr(s, c));
	printf("ft_strchr=    %s\n", ft_strchr(s, c));

	return 0;
}