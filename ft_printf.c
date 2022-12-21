/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:12:03 by alnavarr          #+#    #+#             */
/*   Updated: 2022/12/21 12:08:44 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list arg, char const type, int count)
{
	if (type == 'c')
		count = ft_printchar(va_arg(arg, int), count);
	if (type == 's')
		count = ft_printstr(va_arg(arg,char *), count);
	i/*f (type == 'p')
		count = ft_printpt(va_arg(arg, void *), count);
	if (type == 'd') || if (type == 'i')
		count = ft_printint(va_arg) 
	if (type == 'u')
	
	if (type == 'x')
	
	if (type == 'X')
	
	if (type == '%')*/
}

 