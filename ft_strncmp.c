/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:15:22 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/13 22:15:22 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	ind;

	ind = 0;
	while (s1[ind] != '\0' && s2[ind] != '\0' && ind < n)
	{
		if (s1[ind] != s2[ind])
			return (s1[ind] - s2[ind]);
		ind++;
	}
	if (ind != n)
		return (s1[ind] - s2[ind]);
	return (0);
}