#ifndef PRINTF_H
# define PRINTF_H

#include <unistd.h>
#include <stdlib.h>

int		ft_putchar(int c);
int 	ft_putnbr(int n);
int 	ft_putstr(char *s);
int 	ft_putnbr_hex(unsigned int n, int x);
int		ft_putnbr_ptr(size_t n);
int		ft_putnbr_u(unsigned int n);
int		ft_strlen(const char *s);
int		ft_printf(const char *str, ...);

#endif