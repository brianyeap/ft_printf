/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bryeap <bryeap@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 01:45:12 by brian             #+#    #+#             */
/*   Updated: 2024/06/28 15:44:30 by bryeap           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned long long	abs_val(long long nbr)
{
	if (nbr < 1)
		nbr *= -1;
	return (nbr);
}

static int	int_len(unsigned long long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int					sign;
	int					len;
	unsigned long long	nbr;
	char				*mem;

	sign = 0;
	if (n < 0)
		sign = 1;
	nbr = abs_val(n);
	len = int_len(nbr) + sign;
	mem = malloc(sizeof(char) * (len + 1));
	if (!mem)
		return (NULL);
	mem[len] = '\0';
	while (len--)
	{
		mem[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (sign)
		mem[0] = '-';
	return (mem);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%s", ft_itoa(-2147483648));
// 	return (0);
// }