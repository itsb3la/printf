/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:42:44 by alnavarr          #+#    #+#             */
/*   Updated: 2023/10/03 17:52:26 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_printstr(char const *s, int count)
{
	int	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		count = ft_print_char(s[i], count);
		if (count == -1)
			return (-1);
		i++;
	}
	return (count);
}
