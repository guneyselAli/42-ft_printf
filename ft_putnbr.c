/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:10:04 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/27 16:10:20 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_sub(int n)
{
	if (n >= 10)
	{
		ft_putnbr_sub(n / 10);
		ft_putnbr_sub(n % 10);
	}
	else
		ft_putchar(n + 48);
}

int	ft_putnbr(int n)
{
	int	digits;
	int	nb;

	digits = 1;
	if (n == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
		digits++;
	}
	nb = n;
	while (n >= 10)
	{
		n /= 10;
		digits ++;
	}
	ft_putnbr_sub(nb);
	return (digits);
}
