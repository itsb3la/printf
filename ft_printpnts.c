/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpnts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:34:35 by alnavarr          #+#    #+#             */
/*   Updated: 2023/10/09 17:28:58 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printhexamin(unsigned int hx, int count)
{
	char	*base;

	base = "0123456789abcdef";
	if (hx > 15)
	{
		count = ft_printhexamin(hx / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_printchar(base[hx % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_printpnts( void *ptr, int count)
{
	count = ft_printstr("0x", count);
	if (count == -1)
		return (-1);
	count = ft_printhexamin((unsigned long long)ptr, count);
	if (count == -1)
		return (-1);
	return (count);
}
