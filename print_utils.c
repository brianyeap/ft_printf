/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brian <brian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:04:43 by brian             #+#    #+#             */
/*   Updated: 2024/06/27 23:55:21 by brian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int ft_printnbr(int n)
{
	char 	*num;
	int 	len;

	num = ft_itoa(n);
	len = ft_print_str(num);
	free(num);
	return (len);
}

int ft_print_unsigned_int(unsigned int n)
{
	char	*num;
	int 	len;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		num = ft_itoa(n);
		len = ft_print_str(num);
		free(num);
	}
	return (len);
}