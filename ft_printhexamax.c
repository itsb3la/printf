/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexamax.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:22:47 by alnavarr          #+#    #+#             */
/*   Updated: 2023/10/09 16:21:02 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	ft_print_hexa_up(unsigned int hx, int count)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (hx > 15)
	{
		count = ft_print_hexa_up(hx / 16, count);
		if (count == -1)
			return (-1);
	}
	count = ft_print_char(base[hx % 16], count);
	if (count == -1)
		return (-1);
	return (count);
}
