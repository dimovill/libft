/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:42:24 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/21 00:06:13 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	if (s1[count] == '\0' && len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[count]))
		count++;
	while (ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, count, len - count + 1));
}
