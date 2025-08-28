/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:17:05 by bedantas          #+#    #+#             */
/*   Updated: 2025/08/01 17:53:41 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	unsigned long	ln;
	char			c;
	int				len;

	ln = (unsigned long)n;
	len = 0;
	if (ln < 0)
		ln = -ln;
	if (ln >= 10)
		len += ft_putnbr_u(ln / 10);
	c = (ln % 10) + '0';
	len += write (1, &c, 1);
	return (len);
}
