/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-r <mramos-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:07:23 by mramos-r          #+#    #+#             */
/*   Updated: 2026/05/19 16:57:55 by mramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrhex(unsigned int n, char format)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_nbrhex(n / 16, format);
	if (format == 'x')
		count += ft_putchar("0123456789abcdef"[n % 16]);
	else if (format == 'X')
		count += ft_putchar("0123456789ABCDEF"[n % 16]);
	return (count);
}

/*int	main(void)
{
	unsigned int	n = 93;

	printf("%x", ft_nbrhex(n, 'x'));
	return (0);
}*/
