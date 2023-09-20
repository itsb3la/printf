/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:44:25 by alnavarr          #+#    #+#             */
/*   Updated: 2023/09/20 19:21:50 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printint(int num, int count)
{
	if (num == -2147483648)
	{
		count = ft_printstr("-2147483648", count);
		if (count == -1)
			return (-1);
	}
	else
	{
		if (num < 0)
		{
			count = ft_printchar('-', count);
			if (count == -1)
				return (-1);
			num *= -1;
		}
		count = ft_printnum(num, count);
		if (count == -1)
			return (-1);
	}
	return (count);
}

int	ft_printnum(unsigned int num, int count)
{
	if (num >= 10)
	{
		count = ft_printnum(num / 10, count);
		if (count == -1)
			return (-1);
	}
	count = ft_printchar((num % 10) + '0', count);
	if (count == -1)
		return (-1);
	return (count);
}
