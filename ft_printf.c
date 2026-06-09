/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-r <mramos-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:57:16 by mramos-r          #+#    #+#             */
/*   Updated: 2026/06/01 15:35:40 by mramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	searchtypes(char specifier, va_list *args)
{
	if (specifier == '%')
		return (ft_putchar('%'));
	else if (specifier == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (specifier == 'p')
		return (ft_pointer(va_arg(*args, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(*args, int)));
	else if (specifier == 'u')
		return (ft_putnbru(va_arg(*args, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_nbrhex(va_arg(*args, unsigned int), specifier));
	else
		return (ft_putchar(specifier));
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	if (!format)
		return (-1);
	i = 0;
	len = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			va_end (args);
			return (-1);
		}
		else if (format[i] == '%')
			len += searchtypes(format[++i], &args);
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end (args);
	return (len);
}
