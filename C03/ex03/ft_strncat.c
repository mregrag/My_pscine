/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 03:19:14 by mregrag           #+#    #+#             */
/*   Updated: 2023/07/31 23:49:11 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(dest + i))
		i++;
	while (*(src + j) && nb--)
		*(dest + i++) = *(src + j++);
	*(dest + i) = '\0';
	return (dest);
}
