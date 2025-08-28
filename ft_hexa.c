/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:15:36 by bedantas          #+#    #+#             */
/*   Updated: 2025/08/01 17:53:22 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned long nbr, char *base)
{
	int	len;

	len = 0;
	if (nbr >= 16)
		len += ft_hexa(nbr / 16, base);
	len += ft_putchar(base[nbr % 16]);
	return (len);
}
