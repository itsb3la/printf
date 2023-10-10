/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:12:44 by alnavarr          #+#    #+#             */
/*   Updated: 2023/09/28 17:51:21 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
//#include<unistd.h>

int	ft_printchar(char const c, int count)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	count += 1;
	return (count);
}
/*int	main(void)
{
	ft_printchar("");
*/
