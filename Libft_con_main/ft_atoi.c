/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolina <dimolina@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 09:03:30 by dimolina          #+#    #+#             */
/*   Updated: 2023/02/15 23:58:44 by dimolina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include "libft.h"

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

int main()
{
    char num[] = "12345";
    char neg_num[] = "-67890";
    char non_num[] = "hello";
    
    int result1 = ft_atoi(num);
    int result2 = ft_atoi(neg_num);
    int result3 = ft_atoi(non_num);
    
    printf("The result of %s is: %d\n", num, result1);
    printf("The result of %s is: %d\n", neg_num, result2);
    printf("The result of %s is: %d\n", non_num, result3);
    
    return 0;
}