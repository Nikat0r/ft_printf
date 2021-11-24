/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:55:52 by ababa             #+#    #+#             */
/*   Updated: 2021/11/23 20:52:47 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putchar(char c);
int		ft_putnbr_unsigned(unsigned int nb);
int		ft_putnbr_hexa_low(unsigned int n);
int		ft_putnbr_hexa_upp(unsigned int n);
int		ft_printf(const char *format, ...);
int		ft_int_len(int n);
int		ft_hexa_len(size_t n);
int		ft_putaddress(size_t n);
int		ft_putnbr_hexa_size_t(size_t n);
int		ft_unsigned_len(unsigned int n);
#endif
