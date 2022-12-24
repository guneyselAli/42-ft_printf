#include "ft_printf.h"
void ft_putnbr_u_sub(unsigned int n)
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
		return(ft_putchar('0'));
	while (n >= 10)
	{
		n /= 10;
		digits ++;
	}
	ft_putnbr_u_sub(nb);
	return (digits);
}

