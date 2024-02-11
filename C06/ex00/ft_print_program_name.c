/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 03:29:21 by mregrag           #+#    #+#             */
/*   Updated: 2023/08/02 02:54:21 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	while(argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
		write(1, "\n", 1);
	}

	return (0);
}
