/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:36:42 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/19 23:37:43 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*aux;

	size = 0;
	aux = lst;
	while (aux != NULL)
	{
		size++;
		aux = aux->next;
	}
	return (size);
}
