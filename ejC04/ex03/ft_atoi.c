/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:16:20 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/09 16:37:44 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sig;
	int	result;
	{
		i = 0;
		sig = 1;
		result = 0;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		{
			i++;
		}
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sig = sig * (-1);
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = (str[i] - 48) + (result * 10);
			i++;
		}
		return ((int)(result * sig));
	}
}
