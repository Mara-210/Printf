/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:49:42 by mramos-2          #+#    #+#             */
/*   Updated: 2025/06/05 16:26:57 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	searchtypes(char specifier, va_list args)
{
	if (specifier == '%')
		return (ft_putchar('%'));
	else if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (specifier == 'p')
		return (ft_pointer((unsigned long)va_arg(args, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (specifier == 'u')
		return (ft_putnbru(va_arg(args, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_nbrhex((unsigned int)va_arg(args, int), specifier));
	else
		return (ft_putchar('%'));
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format ++;
			len += searchtypes(*format, args);
		}
		else
			len += ft_putchar(*format);
		format ++;
	}
	va_end(args);
	return (len);
}
/*
int main()
{
	ft_printf("%i", 3);
}*/
