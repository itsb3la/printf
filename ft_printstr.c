/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:26:48 by alnavarr          #+#    #+#             */
/*   Updated: 2022/12/06 10:19:03 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s, int count)
{
	size_t	i;

	i = 0;
	
	if(!s)
		s = "(NULL)";
	while (s[i])
	{
		count = ft_printchar(s[i++], count);
		if (count == -1)
			return (-1);
	}
	return(count);
	
}
