/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 01:48:35 by mregrag           #+#    #+#             */
/*   Updated: 2023/08/02 03:36:11 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(dest + i))
		i++;
	while (*(src + j))
		*(dest + i++) = *(src + j++);
	*(dest + i) = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*string;

	i = 0;
	len = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (i < size)
		len += ft_strlen(*(strs + i++));
	len += ft_strlen(sep) * (size - 1);
	string = malloc(sizeof(char) * len + 1);
	if (string != NULL)
	{
		*string = '\0';
		i = 0;
		while (i < size)
		{
			ft_strcat(string, *(strs + i));
			if (i < size - 1)
				ft_strcat(string, sep);
			i++;
		}
	}
	return (string);
}

int main()
{
	char *array[] = {"hello", "how", "are", "you"};
	char sep[] = ",";

	printf("%s\n", ft_strjoin(4, array, sep));
}
