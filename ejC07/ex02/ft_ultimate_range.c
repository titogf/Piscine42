/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 12:17:31 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/16 15:04:10 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*p;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	p = (int *)malloc(sizeof(**range) * (max - min));
	if (!p)
		return (0);
	i = 0;
	while (min < max)
	{
		p[i++] = min;
		min++;
	}
	*range = p;
	return (i);
}
