/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexamin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:56:53 by alnavarr          #+#    #+#             */
/*   Updated: 2023/10/09 15:59:46 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

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
