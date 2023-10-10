/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:31:48 by alnavarr          #+#    #+#             */
/*   Updated: 2023/10/10 18:38:53 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printf.h"

int	ft_print_unsigned(unsigned int n, int count)
{
	if (n < 0)
		n *= -1;
	if (n > 9)
	{
		count = ft_print_unsigned(n / 10, count);
		if (count == -1)
			return (-1);
	}
	count = ft_printcha(n % 10 + '0', count);
	if (count == -1)
		return (-1);
	return (count);
}
