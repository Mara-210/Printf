/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 13:15:24 by mramos-2          #+#    #+#             */
/*   Updated: 2025/06/05 16:30:41 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbru(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
		len += ft_putnbru(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
