/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:18:33 by alnavarr          #+#    #+#             */
/*   Updated: 2022/12/21 12:25:32 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<unistd.h>

void	ft_printchar(char *str)
{
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		write(1,&str[i],1);
		i++;
	}
}

int	main(void)
{
	ft_printchar("");