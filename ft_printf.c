/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryeap <bryeap@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:43:17 by bryeap            #+#    #+#             */
/*   Updated: 2024/06/27 16:32:10 by bryeap           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list args, const char format)
{

}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			
		}
		else
			len += ft_print_char(format[i]);
		i++;
	}

	va_end(args);
	return (0);
}

int main()
{
	ft_printf("hello my name is %s and i am %d old\n",   "bruan");
	return (0);
}