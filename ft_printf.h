/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-r <mramos-r@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:08:44 by mramos-r          #+#    #+#             */
/*   Updated: 2026/05/19 17:11:18 by mramos-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putnbru(unsigned int n);
int	ft_nbrhex(unsigned int n, char format);
int	ft_pointer(void *ptr);
int	ft_printf(const char *format, ...);
int	searchtypes(char specifier, va_list *args);
#endif
