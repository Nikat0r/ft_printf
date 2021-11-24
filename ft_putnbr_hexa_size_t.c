/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_size_t.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 17:00:20 by ababa             #+#    #+#             */
/*   Updated: 2021/11/23 20:43:46 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa_size_t(size_t n)
{
	char	*base;
	int		len;

	len = ft_hexa_len(n);
	base = "0123456789abcdef";
	if (n > 15)
		ft_putnbr_hexa_size_t(n / 16);
	ft_putchar(base[n % 16]);
	return (len);
}
