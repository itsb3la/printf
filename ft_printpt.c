/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:45:03 by alnavarr          #+#    #+#             */
/*   Updated: 2023/09/20 19:22:21 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpt(void *pt, int count)
{
	count = ft_printstr("0x", count);
	if (count == -1)
		return (-1);
	count = ft_convert((unsigned long int) pt, count);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_convert(unsigned long int num, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (num >= 16)
	{
		count = ft_convert(num / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_printchar(base[num % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}
