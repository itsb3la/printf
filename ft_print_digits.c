/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:51:50 by alnavarr          #+#    #+#             */
/*   Updated: 2023/10/03 17:07:04 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_digits(int n, int count)
{
	long int	number;

	number = n;
	if (number < 0)
	{
		count = ft_print_char('-', count);
	}
}
