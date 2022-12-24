#include "ft_printf.h"
void ft_hex_sub(unsigned int n, int x)
{
	char hex_X[] = "0123456789ABCDEF";
	char hex[] = "0123456789abcdef";

	if (n >= 16)
	{
		ft_hex_sub((n / 16), x);
		ft_hex_sub((n % 16), x);
	}
	else
	{
		if (x == 1)
			ft_putchar(hex_X[n]);
		else
			ft_putchar(hex[n]);
	}
}

int	ft_putnbr_hex(unsigned int n, int x)
{
	unsigned int nb;
	int digits;

	nb = n;
	digits = 1;
	if (n == 0)
		return(ft_putchar('0'));
	while (nb >= 16)
	{
		nb = nb / 16;
		digits++;
	}
	ft_hex_sub(n, x);
	return(digits);
}