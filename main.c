/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-r <mramos-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 12:28:13 by mramos-r          #+#    #+#             */
/*   Updated: 2026/06/02 12:30:48 by mramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*str = "kk";
	char	*s = "holi caracoli";
	int		len1=0;
	int		len2=0;

	len1 = printf("ori: %i\n", -2147483647 - 1);
	len2 = ft_printf("mia: %i\n", -2147483647 - 1);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %i\n", 88);
	len2 = ft_printf("mia: %i\n", 88);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %p\n", str);
	len2 = ft_printf("mia: %p\n", str);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %s tonto el que lo lea %s\n", str, s);
	len2 = ft_printf("mia: %s ajaja eres tonto lo leiste %s\n", str, s);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %x\n", 93);
	len2 = ft_printf("mia: %x\n", 93);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %X\n", 93);
	len2 = ft_printf("mia: %X\n", 93);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %u\n", 22);
	len2 = ft_printf("mia: %u\n", 22);
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %%\n");
	len2 = ft_printf("mia: %%\n");
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = printf("ori: %s\n", "");
	len2 = ft_printf("mia: %s\n", "");
	ft_printf("len1: %i\nlen2: %i\n", len1, len2);
	len1 = ft_printf("mia: %");
	ft_printf("len1: %i\n", len1);
	ft_printf("%m\n");
	ft_printf("Hello %a World\n");
	return (len1);
}