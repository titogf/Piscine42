/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:35:54 by gfernand          #+#    #+#             */
/*   Updated: 2021/12/07 17:05:29 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while ((s1[i] != '\0' && (i < n)) || ((s2[i] != '\0') && (i < n)))
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break ;
		}
		i++;
	}
	return (result);
}
