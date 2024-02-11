/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 02:33:25 by mregrag           #+#    #+#             */
/*   Updated: 2023/07/29 18:53:15 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (nb);
	while (nb > 0)
	{
		nb -= (i * 2) - 1;
		i++;
	}
	if (nb != 0)
		return (0);
	return (i - 1);
}
