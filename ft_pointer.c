/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-r <mramos-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:06:47 by mramos-r          #+#    #+#             */
/*   Updated: 2026/05/19 17:21:26 by mramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex_ptr(unsigned long n)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_puthex_ptr(n / 16);
	len += ft_putchar("0123456789abcdef"[n % 16]);
	return (len);
}

int	ft_pointer(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_puthex_ptr((unsigned long)ptr);
	return (len);
}

/*int	main(void)
{
	char	*ptr = "kk";

	ft_pointer((void *)ptr);
	printf("\n");
	return (0);
}*/
