/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:14:04 by alnavarr          #+#    #+#             */
/*   Updated: 2023/09/28 17:41:25 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<stdlib.h>
# include<unistd.h>

int	ft_printf(char const *s, ...);
int	ft_printchar(char const c, int count);
int	ft_printstr(char const *s, int count);
int	ft_print_digits(int n, int count);
int	ft_printpnts(void *ptr, int count);
int	ft_print_unsigned(unsigned int n, int count);
int	ft_printhexamin(unsigned int hx, int count);
int	ft_printhexamax(unsigned int hx, int count);
#endif
