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

#include "libft.h"

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
