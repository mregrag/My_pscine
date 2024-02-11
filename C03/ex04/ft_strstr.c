/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:42:09 by mregrag           #+#    #+#             */
/*   Updated: 2023/08/01 03:54:16 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*(str + i))
	{
		j = 0;
		while (*(str + i + j) == *(to_find + j))
		{
			if (*(to_find + j + 1) == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
