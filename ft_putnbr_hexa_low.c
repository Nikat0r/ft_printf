/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_low.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:50:59 by ababa             #+#    #+#             */
/*   Updated: 2021/11/23 20:04:56 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa_low(unsigned	int n)
{
	char	*base;
	int		len;

	len = ft_hexa_len(n);
	base = "0123456789abcdef";
	if (n > 15)
		ft_putnbr_hexa_low(n / 16);
	ft_putchar(base[n % 16]);
	return (len);
}
