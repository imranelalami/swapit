/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsnb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-alam <iel-alam@1337.student.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:07:33 by iel-alam            #+#    #+#             */
/*   Updated: 2024/12/03 22:10:54 by iel-alam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsnb(unsigned int i)
{
	int	len;

	len = 0;
	if (i == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (i >= 10)
		len += ft_printunsnb(i / 10);
	len += ft_putchar((i % 10) + '0');
	return (len);
}
