/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:50:48 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/13 10:50:40 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0 && power == 0)
		return (1);
	if (nb == 0)
		return (0);
	while (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
