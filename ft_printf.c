/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:13:31 by alnavarr          #+#    #+#             */
/*   Updated: 2023/09/28 17:43:29 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_cond(char const c, va_list args, int count)
{
	if (c == 'c')
		count = ft_printchar(va_arg(args, int), count);
	else if (c == 's')
		count = ft_printstr(va_arg(args, char *), count);
	else if (c == 'p')
		count = ft_printpnts(va_arg(args, void *), count);
	else if (c == 'd' || c == 'i')
		count = ft_print_digits(va_arg(args, int), count);
	else if (c == 'u')
		count = ft_print_unsigned(va_arg(args, unsigned int), count);
	else if (c == 'x')
		count = ft_printhexamin(va_arg(args, long int), count);
	else if (c == 'X')
		count = ft_printhexamax(va_arg(args, long int), count);
	else if (c == '%')
		count = ft_printchar('%', count);
	else
		count = -1;
	return (count);
}

static int	check(va_list args, char const *s, int count)

{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count = ft_cond((char)s[i], args, count);
			if (count == -1)
				return (-1);
		}
		else
		{
			count = ft_printchar(s[i], count);
			if (count == -1)
				return (-1);
		}
		i++;
	}
	return (count);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, s);
	count = check(args, s, count);
	va_end(args);
	return (count);
}
