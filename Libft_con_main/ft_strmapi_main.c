/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:50:26 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/19 23:03:40 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
size_t	ft_strlen(const char *array)
{
	size_t	cont;

	cont = 0;
	while (array[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char add_index(unsigned int index, char c) {
  return (index + c); // suma el índice al carácter
}

int main() {
  char str[] = "Hello, world!";
  char* modified_str = ft_strmapi(str, &add_index);
  printf("Original string: %s\n", str);
  printf("Modified string: %s\n", modified_str);
  free(modified_str); // liberar memoria asignada por ft_strmapi
  return 0;
}