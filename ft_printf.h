/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 15:48:38 by mramos-2          #+#    #+#             */
/*   Updated: 2025/06/05 15:06:43 by mramos-2         ###   ########.fr       */
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
int	ft_nbrhex(unsigned long n, char upper);
int	ft_pointer(unsigned long n);
int	ft_printf(const char *format, ...);
int	searchtypes(char specifier, va_list args);
int	ft_strlen(const char *s);
#endif