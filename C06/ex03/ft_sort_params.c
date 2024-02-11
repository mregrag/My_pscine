/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 04:31:09 by mregrag           #+#    #+#             */
/*   Updated: 2023/07/27 23:41:54 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_swap(char **c1, char **c2)
{
	char	*tmp;

	tmp = *c1;
	*c1 = *c2;
	*c2 = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort(char **argv, int argc)
{
	int	i;
	int	j;
	int	len;

	len = argc - 1;
	while (len)
	{
		i = 0;
		j = 1;
		while (j < len)
		{
			if (ft_strcmp(*(argv + i), *(argv + j)) > 0)
				ft_swap((argv + i), (argv + j));
			++i;
			++j;
		}
		--len;
	}
}

int	main(int argc, char *argv[])
{
	ft_sort((argv + 1), argc);
	while (*(++argv))
		ft_putstr(*argv);
}
