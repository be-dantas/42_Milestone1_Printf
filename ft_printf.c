/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:27:34 by bedantas          #+#    #+#             */
/*   Updated: 2025/08/01 17:53:20 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_var(const char str, va_list args)
{
	if (str == '%')
		return (ft_putchar('%'));
	else if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (str == 'p')
		return (ft_hexa_ptr(va_arg(args, unsigned long int),
				"0123456789abcdef"));
	else if (str == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (str == 'u')
		return (ft_putnbr_u(va_arg(args, int)));
	else if (str == 'x')
		return (ft_hexa(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (str == 'X')
		return (ft_hexa(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else
		return (ft_putchar('%') + ft_putchar(str));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i]);
			count++;
		}
		else
		{
			i++;
			count += ft_type_var(str[i], args);
		}
		i++;
	}
	va_end (args);
	return (count);
}
