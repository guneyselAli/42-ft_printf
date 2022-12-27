/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguneyse <aguneyse@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:37:42 by aguneyse          #+#    #+#             */
/*   Updated: 2022/12/27 16:37:43 by aguneyse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s)
{
	int	i;

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
		return (6);
	}
	return (i);
}
