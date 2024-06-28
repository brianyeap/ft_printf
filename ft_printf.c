/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryeap <bryeap@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:43:17 by bryeap            #+#    #+#             */
/*   Updated: 2024/06/28 15:44:15 by bryeap           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
	{
		len += ft_print_char(va_arg(args, int));
	}
	else if (format == 's')
		len += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
			len += ft_format(args, format[++i]);
		else
			len += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}

// int main()
// {
// 	ft_printf("%c %c %c", 'a', 'b', 'c');
// 	// printf("%c, %s", 'a', "String");

// 	return (0);
// }