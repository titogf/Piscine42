/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:18:53 by gfernand          #+#    #+#             */
/*   Updated: 2021/11/26 12:51:57 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 78;
	if (n < 0)
	{
		write (1, &negative, 1);
	}
	positive = 80;
	if (n >= 0)
	{
		write (1, &positive, 1);
	}
}
