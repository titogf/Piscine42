/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:35:26 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/03 12:40:35 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	aux;
	int	i;

	i = 0;
	while (i++ < size)
	{
		a = 0;
		b = 1;
		while (*(tab + a) > *(tab + b) && (b < size))
		{
			aux = *(tab + a);
			*(tab + a) = *(tab + b);
			*(tab + b) = aux;
			a++;
			b++;
		}
	}
}
