/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:26:36 by gfernand          #+#    #+#             */
/*   Updated: 2021/11/30 17:56:53 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	funcion1(char a, char b, char c, char d);

void	ft_print_comb2(void)

{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			funcion1(a, b, c, d);
			b++;
		}
		a++;
	}
}

void	funcion1(char a, char b, char c, char d)

{
	c = 48;
	while (c <= 57)
	{
		d = 48;
		while (d <= 57)
		{
			if (((a - 48) * 10 + b - 48) < ((c - 48) * 10 + d - 48))
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, " ", 1);
				write(1, &c, 1);
				write(1, &d, 1);
				if (!(a == 57 && b == 56 && c == 57 && d == 57))
					write(1, ", ", 2);
			}
			d++;
		}
		c++;
	}
}
