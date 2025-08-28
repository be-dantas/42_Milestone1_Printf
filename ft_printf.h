/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 09:49:36 by bedantas          #+#    #+#             */
/*   Updated: 2025/08/01 17:54:10 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h> // para write
# include <stdarg.h> // biblioteca com va_list, va_start, va_arg e va_end

int	ft_hexa_ptr(unsigned long nbr, char *base);
int	ft_hexa(unsigned long nbr, char *base);
int	ft_putchar(int c);
int	ft_putnbr_u(unsigned int n);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_printf(const char *str, ...);
int	ft_type_var(const char str, va_list args);

#endif
