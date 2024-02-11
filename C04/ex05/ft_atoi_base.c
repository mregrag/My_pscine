/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:36:58 by mregrag           #+#    #+#             */
/*   Updated: 2023/08/01 19:13:39 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 07:38:11 by ael-khni          #+#    #+#             */
/*   Updated: 2021/11/28 12:55:02 by ael-khni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (*(base + i))
	{
		if (*(base + i) == 43 || *(base + i) == 45)
			return (0);
		i++;
	}
	i = 0;
	while (*(base + i))
	{
		j = i + 1;
		while (*(base + i) != *(base + j) && *(base + j))
			j++;
		if (*(base + i) == *(base + j))
			return (0);
		i++;
	}
	return (1);
}

int	char_base(char c, char *base)
{
	int	i;

	i = 0;
	while (c != *(base + i) && *(base + i))
		i++;
	if (*(base + i) == '\0')
		return (-1);
	return (i);
}

int	convert(char *str, int i, char *base)
{
	int	b;
	int	len;

	b = 0;
	len = ft_strlen(base);
	while (*(str + i))
	{
		if (char_base(*(str + i), base) == -1)
			break ;
		b = (b * len) + char_base(*(str + i), base);
		i++;
	}
	return (b);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	if (!is_valid(base))
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*(str + i) == 43 || *(str + i) == 45)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	res = convert(str, i, base);
	return (res * sign);
}
