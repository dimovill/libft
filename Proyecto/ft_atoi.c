/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:03:30 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/13 09:03:37 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signo;
	int	res;

	i = 0;
	signo = 1;
	res = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
		signo = signo * -1;
		i++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		res = (str[i] - 48) + (res * 10);
		i++;
	}
	return (res * signo);
}

int	main (void)
{
	char str[] = "     ---+--+1234ab567";
	char str1[] = "1234ab567";

	printf("Resultado ft str: %d\n", ft_atoi(str));
	printf("Resultado ft str1: %d\n", ft_atoi(str1));
	printf("Resultado atoi str: %d\n", atoi(str));
	printf("Resultado atoi str1: %d\n", atoi(str1));
	return(0);
}
