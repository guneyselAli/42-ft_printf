/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:37:31 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/27 16:37:32 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnbr_sub(int n)
{
	if (n >= 10)
	{
		ft_printnbr_sub(n / 10);
		ft_printnbr_sub(n % 10);
	}
	else
		ft_printchar(n + 48);
}

int	ft_printnbr(int n)
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
		return (ft_printstr("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		ft_printchar('-');
		digits++;
	}
	nb = n;
	while (n >= 10)
	{
		n /= 10;
		digits ++;
	}
	ft_printnbr_sub(nb);
	return (digits);
}
