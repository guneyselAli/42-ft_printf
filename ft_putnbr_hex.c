/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:04:41 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/27 16:04:50 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_sub(unsigned int n, char x)
{
	if (n >= 16)
	{
		ft_hex_sub((n / 16), x);
		ft_hex_sub((n % 16), x);
	}
	else
	{
		if (x == 'X')
			ft_putchar("0123456789ABCDEF"[n]);
		else
			ft_putchar("0123456789abcdef"[n]);
	}
}

int	ft_putnbr_hex(unsigned int n, char x)
{
	unsigned int	nb;
	int				digits;

	nb = n;
	digits = 1;
	if (n == 0)
		return (ft_putchar('0'));
	while (nb >= 16)
	{
		nb = nb / 16;
		digits++;
	}
	ft_hex_sub(n, x);
	return (digits);
}
