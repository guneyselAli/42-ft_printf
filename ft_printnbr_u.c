/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_u.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:37:20 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/27 16:37:23 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnbr_u_sub(unsigned int n)
{
	if (n >= 10)
	{
		ft_printnbr_u_sub(n / 10);
		ft_printnbr_u_sub(n % 10);
	}
	else
		ft_printchar(n + 48);
}

int	ft_printnbr_u(unsigned int n)
{
	int				digits;
	unsigned int	nb;

	digits = 1;
	nb = n;
	if (n == 0)
		return (ft_printchar('0'));
	while (n >= 10)
	{
		n /= 10;
		digits ++;
	}
	ft_printnbr_u_sub(nb);
	return (digits);
}
