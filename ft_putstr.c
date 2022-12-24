#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int i;

	i = 0;
	if (s)
	{
		i = ft_strlen(s);
		while (*s)
		{
			write(1, s, 1);
			s++;
		}
	}
	else
	{
		write(1, "(null)", 6);
		return(6);
	}
	return (i);
}
