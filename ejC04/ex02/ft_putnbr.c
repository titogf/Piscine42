/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:59:11 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/09 19:26:21 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-214783648", 11);
	else if (nb < 0)
	{
		nb *= -1;
		write (1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb != -2147483648)
	{
		nb += 48;
		write (1, &nb, 1);
	}
}*/

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb != -2147483648)
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
}
