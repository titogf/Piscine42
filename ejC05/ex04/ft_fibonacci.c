/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 10:19:45 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/13 11:14:06 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index > 1)
	{
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (result);
	}
	return (0);
}
