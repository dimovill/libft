/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:42:24 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/16 08:42:24 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*recorte;
	size_t	ini;
	size_t	fin;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	fin = ft_strlen(s1) - 1;
	ini = 0;
	while (s1[ini] && ft_strchr(set, s1[ini]))
		++ini;
	while (s1[fin] && ft_strchr(set, s1[fin]))
		--fin;
	recorte = ft_substr(s1, ini, fin - ini + 1);
	return (recorte);
}
