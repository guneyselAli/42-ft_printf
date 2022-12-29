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
# include <stdarg.h>

int		ft_printchar(int c);
int		ft_printnbr(int n);
int		ft_printstr(char *s);
int		ft_printnbr_hex(unsigned int n, char x);
int		ft_printnbr_ptr(size_t n);
int		ft_printnbr_u(unsigned int n);
int		ft_strlen(const char *s);
int		ft_printf(const char *str, ...);

#endif
