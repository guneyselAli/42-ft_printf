#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int ft_printf(const char *str, ...)
{
	va_list arglist;
	int count;

	count = 0;
	va_start(arglist, str);
	if (!str)
		return (0);
	while (*str)
	{
		if (*str != '%')
			count += ft_putchar(*str);
		if (*str == '%')
		{
			str++;
			if (*str == 'c')
				count += ft_putchar(va_arg(arglist, int));
			if (*str == 's')
				count += ft_putstr(va_arg(arglist, char *));
			if (*str == 'p')
				count += ft_putnbr_ptr(va_arg(arglist, size_t));   
			if (*str == 'd' || *str == 'i')
				count += ft_putnbr(va_arg(arglist,int));
			if (*str == 'u')
				count += ft_putnbr_u(va_arg(arglist, unsigned int));
			if (*str == 'x')
				count += ft_putnbr_hex(va_arg(arglist, unsigned int), 0);
			if (*str == 'X')
				count += ft_putnbr_hex(va_arg(arglist,unsigned int), 1);
			if (*str == '%')
				count += ft_putchar('%');
		}
		str++;
	}
	return(count);
}