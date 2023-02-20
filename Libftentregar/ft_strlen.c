/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:07:44 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/20 21:52:57 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
