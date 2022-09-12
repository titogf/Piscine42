/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:58:42 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/15 11:53:24 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, str + i, 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	a;

	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a++]);
		write (1, "\n", 1);
	}
}
