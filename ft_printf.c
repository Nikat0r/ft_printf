/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:09:57 by ababa             #+#    #+#             */
/*   Updated: 2021/11/23 21:41:20 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conditions(va_list args, char c)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	if (c == 'd')
		count += ft_putnbr(va_arg(args, int));
	if (c == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		count += ft_putnbr_unsigned(va_arg(args, unsigned int));
	if (c == 'x')
		count += ft_putnbr_hexa_low(va_arg(args, unsigned int));
	if (c == 'X')
		count += ft_putnbr_hexa_upp(va_arg(args, unsigned int));
	if (c == 'p')
		count += ft_putaddress(va_arg(args, size_t));
	if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;
	char	c;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			c = format[i + 1];
			count += ft_conditions(args, c);
			i = i + 2;
		}
		else
		{
			ft_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
