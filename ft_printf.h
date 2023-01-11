/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:04:48 by alnavarr          #+#    #+#             */
/*   Updated: 2022/12/27 11:51:39 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<stdlib.h>
# include<unistd.h>
# include<stdio.h>

int	ft_printf(char const *s, ...);
int	ft_printchar(int c, int count);
int	ft_printstr(char *s, int count);
int	ft_type(va_list arg, char const type, int count);
int	ft_printint(int num, int count);
int	ft_printnum(unsigned int num, int count);
int	ft_printpt(void *pt, int count);
int	ft_convert(unsigned long int num, int count);
int	ft_printhexamin(unsigned int num, int count);
int	ft_printhexamax(unsigned int num, int count);
#endif