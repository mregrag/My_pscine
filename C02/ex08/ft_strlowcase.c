/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:22:29 by mregrag           #+#    #+#             */
/*   Updated: 2023/07/25 22:32:43 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 65 && *(str + i) <= 90) 
			*(str + i) += 32;
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "ABCDEF";
	printf("%s\n", ft_strlowcase(str));
}
