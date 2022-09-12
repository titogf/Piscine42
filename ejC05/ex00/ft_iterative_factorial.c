/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:12:58 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/13 13:10:33 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	b;

	b = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (b > 0)
	{
		nb = nb * b;
		result = nb;
		b--;
	}
	return (result);
}
