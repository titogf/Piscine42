/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 12:43:53 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/13 19:42:13 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	number;
	int	result;

	number = 0;
	if (nb == 1)
		return (1);
	while (number != nb && number < 463401)
	{
		if ((number * number) == nb)
		{
			result = number;
			return (result);
		}
		number++;
	}
	return (0);
}
