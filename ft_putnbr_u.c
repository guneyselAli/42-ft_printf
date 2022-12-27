/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:09:11 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/27 16:09:37 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u_sub(unsigned int n)
{
	if (n >= 10)
	{
		ft_putnbr_u_sub(n / 10);
		ft_putnbr_u_sub(n % 10);
	}
	else
		ft_putchar(n + 48);
}

int	ft_putnbr_u(unsigned int n)
{
	int				digits;
	unsigned int	nb;

	digits = 1;
	nb = n;
	if (n == 0)
		return (ft_putchar('0'));
	while (n >= 10)
	{
		n /= 10;
		digits ++;
	}
	ft_putnbr_u_sub(nb);
	return (digits);
}
