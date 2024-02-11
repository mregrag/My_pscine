/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 19:01:16 by mregrag           #+#    #+#             */
/*   Updated: 2023/08/01 19:28:11 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
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

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	int		len;

	if (!is_valid(base))
		return ;
	n = nbr;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	len = ft_strlen(base);
	if (n < len)
		ft_putchar(base[n % len]);
	else
	{
		ft_putnbr_base(n / len, base);
		ft_putnbr_base(n % len, base);
	}
}
