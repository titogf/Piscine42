/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 15:14:26 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/13 11:16:26 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	number;
	int	contador;

	number = 1;
	contador = 0;
	while ((nb > 1) && (nb >= number))
	{
		if ((nb % number) == 0)
		{
			contador++;
			if ((number == nb) && (contador == 2))
				return (1);
		}
		number++;
	}
	return (0);
}
