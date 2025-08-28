/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:15:36 by bedantas          #+#    #+#             */
/*   Updated: 2025/08/01 17:53:24 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_ptr(unsigned long nbr, char *base)
{
	int	len;

	len = 0;
	if (!nbr)
		return (ft_putstr("(nil)"));
	if (nbr >= 16)
		len += ft_hexa_ptr(nbr / 16, base);
	else
		len += ft_putstr("0x");
	len += ft_putchar(base[nbr % 16]);
	return (len);
}
