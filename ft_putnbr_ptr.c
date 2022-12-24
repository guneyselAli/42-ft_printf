#include "ft_printf.h"
void ft_ptr_sub(size_t n)
{
	char hex[] = "0123456789abcdef";

	if (n >= 16)
	{
		ft_ptr_sub(n / 16);
		ft_ptr_sub(n % 16);
	}
	else
		ft_putchar(hex[n]); 
}

int	ft_putnbr_ptr(size_t n)
{
	size_t nb;
	int digits;

	nb = n;
	digits = 3;
	ft_putstr("0x");
	if (n == 0)
		return(ft_putchar('0') + 2);
	while (nb >= 16)
	{
		nb = nb / 16;
		digits++;
	}
	ft_ptr_sub(n);
	return(digits);
}