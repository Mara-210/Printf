/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:23:05 by mramos-2          #+#    #+#             */
/*   Updated: 2025/06/05 15:07:42 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_nbrhex(unsigned long n, char upper)
{
	int		len;
	char	*num_hex;

	if (upper == 'X')
		num_hex = "0123456789ABCDEF";
	else
		num_hex = "0123456789abcdef";
	len = 0;
	if (n >= 16)
		len += ft_nbrhex(n / 16, upper);
	len += ft_putchar(num_hex[n % 16]);
	return (len);
}
