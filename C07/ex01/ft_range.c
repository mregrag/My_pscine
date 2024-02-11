/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 00:21:16 by mregrag           #+#    #+#             */
/*   Updated: 2023/07/31 19:43:35 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (array != NULL)
	{
		while (i < size)
			*(array + i++) = min++;
	}
	return (array);
}
