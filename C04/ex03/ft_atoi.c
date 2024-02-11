/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:58:44 by mregrag           #+#    #+#             */
/*   Updated: 2024/02/05 17:48:17 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_atoi(char *str)
{
	int	number; 
	int	sign;

	sign = 1;
	number = 0;
	while ((*str >= 9 && *str <= 13))
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = number * 10 + (*str - 48);
		str++;
	}
	return (number * sign);
}

int main(void)
{
	printf("%d\n", ft_atoi("451 45"));
}
