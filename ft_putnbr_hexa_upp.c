/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa_upp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ababa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:02:57 by ababa             #+#    #+#             */
/*   Updated: 2021/11/23 20:28:42 by ababa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa_upp(unsigned int n)
{
	char	*base;
	int		len;

	len = ft_hexa_len(n);
	base = "0123456789ABCDEF";
	if (n > 15)
		ft_putnbr_hexa_upp(n / 16);
	ft_putchar(base[n % 16]);
	return (len);
}
