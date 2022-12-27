/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 11:54:54 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/27 11:58:23 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_sub(va_list arglist, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arglist, int)));
	if (c == 's')
		return (ft_putstr(va_arg(arglist, char *)));
	if (c == 'p')
		return (ft_putnbr_ptr(va_arg(arglist, size_t)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(arglist, int)));
	if (c == 'u')
		return (ft_putnbr_u(va_arg(arglist, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_putnbr_hex(va_arg(arglist, unsigned int), c));
	if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arglist;
	int		count;

	count = 0;
	va_start(arglist, str);
	while (*str && str)
	{
		if (*str != '%')
			count += ft_putchar(*str++);
		if (*str == '%')
		{	
			str++;
			if (*str != 0)
				count += ft_printf_sub(arglist, *str++);
		}
	}
	return (count);
}
