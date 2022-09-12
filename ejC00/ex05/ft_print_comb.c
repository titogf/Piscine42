/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:59:04 by gfernand          #+#    #+#             */
/*   Updated: 2021/11/29 16:32:09 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	funcion1(char a, char b, char c, char *commaspace);

void	ft_print_comb(void)

{
	char	a;
	char	b;
	char	c;
	char	*commaspace;

	commaspace = ", ";
	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			c = 48;
			while (c <= 57)
			{
				if (!(a == b || a == c || b == c))
				{
					funcion1(a, b, c, commaspace);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	funcion1(char a, char b, char c, char *commaspace)
{
	if (a < b && b < c)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (!(a == 55 && b == 56 && c == 57))
			write(1, commaspace, 2);
	}
}
