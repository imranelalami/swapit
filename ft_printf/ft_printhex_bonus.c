/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@1337.student.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 06:50:15 by iel-alam            #+#    #+#             */
/*   Updated: 2024/12/04 16:03:38 by iel-alam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_printhex(unsigned long address, const char *base, char flag)
{
	int	len;

	len = 0;
	if (!base || (base[10] != 'a' && base[10] != 'A'))
		return (0);
	if (address == 0)
		return (ft_putchar('0'));
	if (flag == '#' && address != 0)
	{
		len += ft_putchar('0');
		if (base[10] == 'a')
			len += ft_putchar('x');
		else
			len += ft_putchar('X');
	}
	if (address >= 16)
		len += ft_printhex(address / 16, base, 0);
	len += ft_putchar(base[address % 16]);
	return (len);
}
