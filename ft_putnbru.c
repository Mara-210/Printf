/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-r <mramos-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:05:39 by mramos-r          #+#    #+#             */
/*   Updated: 2026/05/19 12:35:31 by mramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbru(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_putnbru(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
