/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:35:09 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/13 19:44:20 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_mod(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 1;
	while (i * i <= nb && i <= 463401)
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	end;

	if (nb <= 1)
		return (0);
	i = 2;
	end = ft_sqrt_mod(nb);
	while (i <= end)
	{
		if (nb % i++ == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
