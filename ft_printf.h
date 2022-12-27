/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:02:03 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/27 16:02:40 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(int c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putnbr_hex(unsigned int n, char x);
int		ft_putnbr_ptr(size_t n);
int		ft_putnbr_u(unsigned int n);
int		ft_strlen(const char *s);
int		ft_printf(const char *str, ...);

#endif
