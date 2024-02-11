/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <regrag0101@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:15:33 by mregrag           #+#    #+#             */
/*   Updated: 2023/07/21 13:06:56 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
		dest[i] = src[i]
			i++
		*(dest + i++) = *src++;
	*(dest + i) = '\0';
	return (dest);
}
