/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 16:34:30 by bryeap            #+#    #+#             */
/*   Updated: 2024/06/28 14:06:12 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include	<stdarg.h>
#include	<unistd.h>
#include    <stdlib.h>

int	    ft_printf(const char *str, ...);
int     ft_print_char(int c);
int     ft_print_str(char *str);
int     ft_print_ptr(unsigned long long ptr);
int     ft_printnbr(int n);
int     ft_print_unsigned_int(unsigned int n);
int     ft_print_hex(unsigned int num, const char format);

void    ft_putchar(char c);
void    ft_putstr(char *str);
char	*ft_itoa(int n);

# endif