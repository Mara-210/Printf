/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:16:36 by mramos-2          #+#    #+#             */
/*   Updated: 2025/06/05 15:07:38 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_pointer(unsigned long n)
{
	int	len;

	len = 0;
	if (!n)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_nbrhex(n, 'x');
	return (len);
}
