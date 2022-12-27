/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:08:09 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/27 16:08:30 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptr_sub(size_t n)
{
	if (n >= 16)
	{
		ft_ptr_sub(n / 16);
		ft_ptr_sub(n % 16);
	}
	else
		ft_putchar("0123456789abcdef"[n]);
}

int	ft_putnbr_ptr(size_t n)
{
	size_t	nb;
	int		digits;

	nb = n;
	digits = 3;
	ft_putstr("0x");
	if (n == 0)
		return (ft_putchar('0') + 2);
	while (nb >= 16)
	{
		nb = nb / 16;
		digits++;
	}
	ft_ptr_sub(n);
	return (digits);
}
